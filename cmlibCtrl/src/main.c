#include <pspsdk.h>
#include <pspkernel.h>
#include <pspctrl.h>
#include <pspctrl_kernel.h>

#include "cmlibctrl.h"


PSP_MODULE_INFO("cmlibCtrl", PSP_MODULE_KERNEL, 1, 1);

int flag = 0;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskAllButton
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool libCtrlMaskAllButton()
{
	if(flag < 0)flag = 0;
	sceCtrl_driver_7CA723DC(0xFFFF, (flag > 0 ? 1 : 0));
	
	return (flag >0 ? true : false);

}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskAllButtonOn
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlMaskAllButtonOn(bool *status)
{
	if(*status != true){
		*status = true;
		flag ++;
		libCtrlMaskAllButton();
		return 0;
	}
	return -1;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskAllButtonOff
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlMaskAllButtonOff(bool *status)
{
	if(*status == true){
		*status = false;
		flag --;
		libCtrlMaskAllButton();
		return 0;
	}
	return -1;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskAllButtonStatus
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool libCtrlMaskAllButtonStatus()
{
	return (flag >0 ? true : false);

}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskAllButtonAgain
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool libCtrlMaskAllButtonAgain()
{
	return libCtrlMaskAllButton();
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskButtonOn
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlMaskButtonOn(int PspCtrlButtons)
{
	sceCtrl_driver_7CA723DC(PspCtrlButtons,1);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskButtonOff
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlMaskButtonOff(int PspCtrlButtons)
{
	sceCtrl_driver_7CA723DC(PspCtrlButtons,0);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlMaskButtonStatus
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool libCtrlMaskButtonStatus(int PspCtrlButtons)
{
	int status = sceCtrl_driver_5E77BC8A(PspCtrlButtons);
	
	return (status == 1 ? true : false);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlCountButtons		Thanks plum
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlCountButtons(u32 buttons, int count)
{
	SceCtrlData pad;
	clock_t time;

	// 指定するボタンをセット
	pad.Buttons = buttons;

	// 現在の時間 + 指定した時間
	count = 1000000 * count;		//count秒
	time = sceKernelLibcClock() + count;

	// ボタンが離れるまでループ
	while((pad.Buttons & buttons) == buttons)
	{
		// ディレイ
		sceKernelDelayThread(50000);

		// パッド情報を取得する
		sceCtrlPeekBufferPositive(&pad, 1);
		// 現在の時間が指定した時間を過ぎたら
		if(sceKernelLibcClock() > time)
			return 1;
	}

	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlWaitButtonUp		Thanks SnyFbSx
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlWaitButtonUp(u32 buttons)
{
	SceCtrlData pad;

	if(!buttons)buttons = PSP_CTRL_ALL;
	sceCtrlPeekBufferPositive( &pad, 1 );
	while( (pad.Buttons & buttons) != 0 ){
		sceCtrlPeekBufferPositive( &pad, 1 );
		sceKernelDelayThread( 50000 );
	}

	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  libCtrlWaitButtonDown
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int libCtrlWaitButtonDown(u32 buttons)
{
	SceCtrlData pad;

	if(!buttons)buttons = PSP_CTRL_ALL;
	sceCtrlPeekBufferPositive( &pad, 1 );
	while( (pad.Buttons & buttons) == 0 ){
		sceCtrlPeekBufferPositive( &pad, 1 );
		sceKernelDelayThread( 50000 );
	}

	return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  ENTRY POINT
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int module_start(SceSize args, void *argp)
{
	return 0;
}

int module_stop(SceSize args, void *argp)
{
	return 0;
}
