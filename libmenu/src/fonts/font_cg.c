//MacroFireで使われていた font_cg.c を少し微調整した物
//左部分がつぶれて見にくかったので、全文字とも横へ1列ずらしてある

const char font_cg[] = {
	/* 0x00-0x7F */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* NUL */
	0x3c, 0x42, 0xa5, 0x81, 0xa5, 0x99, 0x42, 0x3c, /* SOH */
	0x3c, 0x7e, 0xdb, 0xff, 0xff, 0xdb, 0x66, 0x3c, /* STX */
	0x6c, 0xfe, 0xfe, 0xfe, 0x7c, 0x38, 0x10, 0x00, /* ETX */
	0x10, 0x38, 0x7c, 0xfe, 0x7c, 0x38, 0x10, 0x00, /* EOT */
	0x10, 0x38, 0x54, 0xfe, 0x54, 0x10, 0x38, 0x00, /* ENQ */
	0x10, 0x38, 0x7c, 0xfe, 0xfe, 0x10, 0x38, 0x00, /* ACK */
	0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, /* BEL */
	0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, /* BS  */
	0x38, 0x44, 0x82, 0x82, 0x82, 0x44, 0x38, 0x00, /* HT  */
	0xc7, 0xbb, 0x7d, 0x7d, 0x7d, 0xbb, 0xc7, 0xff, /* LF  */
	0x0f, 0x03, 0x05, 0x79, 0x88, 0x88, 0x88, 0x70, /* VT  */
	0x38, 0x44, 0x44, 0x44, 0x38, 0x10, 0x7c, 0x10, /* FF  */
	0x30, 0x28, 0x24, 0x24, 0x28, 0x20, 0xe0, 0xc0, /* CR  */
	0x3c, 0x24, 0x3c, 0x24, 0x24, 0xe4, 0xdc, 0x18, /* SO  */
	0x10, 0x54, 0x38, 0xee, 0x38, 0x54, 0x10, 0x00, /* SI  */
	0x10, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x10, 0x10, /* DLE */
	0x10, 0x10, 0x10, 0xff, 0x00, 0x00, 0x00, 0x00, /* DC1 */
	0x00, 0x00, 0x00, 0xff, 0x10, 0x10, 0x10, 0x10, /* DC2 */
	0x10, 0x10, 0x10, 0xf0, 0x10, 0x10, 0x10, 0x10, /* DC3 */
	0x10, 0x10, 0x10, 0x1f, 0x10, 0x10, 0x10, 0x10, /* DC4 */
	0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10, 0x10, /* NAK */
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, /* SYN */
	0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, /* ETB */
	0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, /* CAN */
	0x00, 0x00, 0x00, 0xf0, 0x10, 0x10, 0x10, 0x10, /* EM  */
	0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, /* SUB */
	0x10, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, /* ESC */
	0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81, /* FS  */
	0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, /* GS  */
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, /* RS  */
	0x00, 0x10, 0x10, 0xff, 0x10, 0x10, 0x00, 0x00, /* US  */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (WHITESPACE) */
	0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, 0x00, /* ! */
	0x28, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, /* " */
	0x28, 0x28, 0x7C, 0x28, 0x7C, 0x28, 0x28, 0x00, /* # */
	0x10, 0x3C, 0x50, 0x38, 0x14, 0x78, 0x10, 0x00, /* $ */
	0x60, 0x64, 0x08, 0x10, 0x20, 0x4C, 0x0C, 0x00, /* % */
	0x20, 0x50, 0x20, 0x54, 0x48, 0x4C, 0x30, 0x00, /* & */
	0x08, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, /* ' */
	0x08, 0x10, 0x20, 0x20, 0x20, 0x10, 0x08, 0x00, /* ( */
	0x20, 0x10, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00, /* ) */
	0x10, 0x54, 0x38, 0x10, 0x38, 0x54, 0x10, 0x00, /* * */
	0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00, /* + */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x20, /* , */
	0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, /* - */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, /* . */
	0x00, 0x04, 0x08, 0x10, 0x20, 0x40, 0x00, 0x00, /* / */
	0x38, 0x44, 0x4C, 0x54, 0x64, 0x44, 0x38, 0x00, // 0
	0x10, 0x30, 0x50, 0x10, 0x10, 0x10, 0x7C, 0x00, // 1
	0x38, 0x44, 0x04, 0x08, 0x30, 0x40, 0x7C, 0x00, // 2
	0x38, 0x44, 0x04, 0x18, 0x04, 0x44, 0x38, 0x00, // 3
	0x08, 0x18, 0x28, 0x48, 0x7C, 0x08, 0x08, 0x00, // 4
	0x7C, 0x40, 0x40, 0x78, 0x04, 0x04, 0x78, 0x00, // 5
	0x18, 0x20, 0x40, 0x78, 0x44, 0x44, 0x38, 0x00, // 6
	0x7C, 0x44, 0x08, 0x10, 0x10, 0x10, 0x10, 0x00, // 7
	0x38, 0x44, 0x44, 0x38, 0x44, 0x44, 0x38, 0x00, // 8
	0x38, 0x44, 0x44, 0x3C, 0x04, 0x08, 0x30, 0x00, // 9
	0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, /* : */
	0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x10, 0x20, /* ; */
	0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x00, /* < */
	0x00, 0x00, 0x7C, 0x00, 0x7C, 0x00, 0x00, 0x00, /* = */
	0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x00, /* > */
	0x38, 0x44, 0x04, 0x08, 0x10, 0x00, 0x10, 0x00, /* ? */
	0x38, 0x44, 0x04, 0x34, 0x54, 0x54, 0x38, 0x00, /* @ */
	0x38, 0x44, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x00, // A
	0x78, 0x44, 0x44, 0x78, 0x44, 0x44, 0x78, 0x00, // B
	0x3C, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3C, 0x00, // C
	0x78, 0x44, 0x44, 0x44, 0x44, 0x44, 0x78, 0x00, // D
	0x7C, 0x40, 0x40, 0x78, 0x40, 0x40, 0x7C, 0x00, // E
	0x7C, 0x40, 0x40, 0x78, 0x40, 0x40, 0x40, 0x00, // F
	0x3C, 0x40, 0x40, 0x5C, 0x44, 0x44, 0x3C, 0x00, // G
	0x44, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x44, 0x00, // H
	0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, // I
	0x1C, 0x04, 0x04, 0x04, 0x04, 0x44, 0x38, 0x00, // J
	0x44, 0x48, 0x50, 0x60, 0x50, 0x48, 0x44, 0x00, // K
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7C, 0x00, // L
	0x44, 0x6C, 0x54, 0x54, 0x44, 0x44, 0x44, 0x00, // M
	0x44, 0x64, 0x64, 0x54, 0x4C, 0x4C, 0x44, 0x00, // N
	0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, // O
	0x78, 0x44, 0x44, 0x78, 0x40, 0x40, 0x40, 0x00, // P
	0x38, 0x44, 0x44, 0x44, 0x54, 0x4C, 0x3C, 0x00, // Q
	0x78, 0x44, 0x44, 0x78, 0x44, 0x44, 0x44, 0x00, // R
	0x3C, 0x40, 0x40, 0x38, 0x04, 0x04, 0x78, 0x00, // S
	0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, // U
	0x44, 0x44, 0x44, 0x44, 0x44, 0x28, 0x10, 0x00, // V
	0x44, 0x44, 0x44, 0x54, 0x54, 0x6C, 0x44, 0x00, // W
	0x44, 0x44, 0x28, 0x10, 0x28, 0x44, 0x44, 0x00, // X
	0x44, 0x44, 0x44, 0x28, 0x10, 0x10, 0x10, 0x00, // Y
	0x7C, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7C, 0x00, // Z
	0x38, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x00, /* [ */
	0x00, 0x40, 0x20, 0x10, 0x08, 0x04, 0x00, 0x00, /* \ */
	0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x00, /* ] */
	0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, /* ^ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, /* _ */
	0x20, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, /* ` */
	0x00, 0x00, 0x3C, 0x44, 0x44, 0x4C, 0x34, 0x00, // a
	0x40, 0x40, 0x78, 0x44, 0x44, 0x44, 0x78, 0x00, // b
	0x00, 0x00, 0x3C, 0x40, 0x40, 0x40, 0x3C, 0x00, // c
	0x04, 0x04, 0x3C, 0x44, 0x44, 0x44, 0x3C, 0x00, // d
	0x00, 0x00, 0x38, 0x44, 0x7C, 0x40, 0x3C, 0x00, // e
	0x0C, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x10, 0x00, // f
	0x00, 0x00, 0x3C, 0x44, 0x44, 0x3C, 0x04, 0x38, // g
	0x40, 0x40, 0x78, 0x44, 0x44, 0x44, 0x44, 0x00, // h
	0x10, 0x00, 0x30, 0x10, 0x10, 0x10, 0x38, 0x00, // i
	0x04, 0x00, 0x0C, 0x04, 0x04, 0x04, 0x44, 0x38, // j
	0x40, 0x48, 0x50, 0x60, 0x50, 0x48, 0x44, 0x00, // k
	0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, // l
	0x00, 0x00, 0x68, 0x54, 0x54, 0x54, 0x54, 0x00, // m
	0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x44, 0x00, // n
	0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, // o
	0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x78, 0x40, // p
	0x00, 0x00, 0x3C, 0x44, 0x44, 0x44, 0x3C, 0x04, // q
	0x00, 0x00, 0x5C, 0x60, 0x40, 0x40, 0x40, 0x00, // r
	0x00, 0x00, 0x3C, 0x40, 0x38, 0x04, 0x78, 0x00, // s
	0x20, 0x20, 0x7C, 0x20, 0x20, 0x20, 0x1C, 0x00, // t
	0x00, 0x00, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x00, // u
	0x00, 0x00, 0x44, 0x44, 0x44, 0x28, 0x10, 0x00, // v
	0x00, 0x00, 0x44, 0x54, 0x54, 0x54, 0x28, 0x00, // w
	0x00, 0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00, // x
	0x00, 0x00, 0x44, 0x44, 0x44, 0x3C, 0x04, 0x38, // y
	0x00, 0x00, 0x7C, 0x08, 0x10, 0x20, 0x7C, 0x00, // z
	0x0C, 0x10, 0x10, 0x20, 0x10, 0x10, 0x0C, 0x00, /* { */
	0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, 0x00, /* | */
	0x60, 0x10, 0x10, 0x08, 0x10, 0x10, 0x60, 0x00, /* } */
	0x20, 0x54, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, /* ~ */
	0x00, 0x00, 0x20, 0x50, 0xf8, 0x00, 0x00, 0x00,  /* (DEL) */
	
	/* 0x80-0xFF */
	0x00, 0x10, 0x38, 0x54, 0x10, 0x10, 0x00, 0x00, /* -80- PSP_CTRL_UP */
	0x00, 0x10, 0x08, 0x7C, 0x08, 0x10, 0x00, 0x00, /* -81- PSP_CTRL_RIGHT */
	0x00, 0x10, 0x10, 0x54, 0x38, 0x10, 0x00, 0x00, /* -82- PSP_CTRL_DOWN */
	0x00, 0x10, 0x20, 0x7C, 0x20, 0x10, 0x00, 0x00, /* -83- PSP_CTRL_LEFT */
	0x10, 0x10, 0x28, 0x28, 0x44, 0x7C, 0x00, 0x00, /* -84- PSP_CTRL_TRIANGLE */
	0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, /* -85- PSP_CTRL_CIRCLE */
	0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x00, /* -86- PSP_CTRL_CROSS */
	0x00, 0x7C, 0x44, 0x44, 0x44, 0x7C, 0x00, 0x00, /* -87- PSP_CTRL_SQUARE */
	0x10, 0x18, 0x14, 0x14, 0x10, 0x30, 0x70, 0x60, /* -88- PSP_CTRL_NOTE */
	0x00, 0x7F, 0x41, 0xC1, 0xC1, 0x41, 0x7F, 0x00, /* -89- BATTERY_0 */
	0x00, 0x7F, 0x43, 0xC3, 0xC3, 0x43, 0x7F, 0x00, /* -8A- BATTERY_1 */
	0x00, 0x7F, 0x47, 0xC7, 0xC7, 0x47, 0x7F, 0x00, /* -8B- BATTERY_2 */
	0x00, 0x7F, 0x4F, 0xCF, 0xCF, 0x4F, 0x7F, 0x00, /* -8C- BATTERY_3 */
	0x00, 0x7F, 0x5F, 0xDF, 0xDF, 0x5F, 0x7F, 0x00, /* -8D- BATTERY_4 */
	0x00, 0x7F, 0x7F, 0xFF, 0xFF, 0x7F, 0x7F, 0x00, /* -8E- BATTERY_5 */
	0x03, 0x06, 0x3C, 0x20, 0x20, 0x3C, 0x06, 0x03, /* -8F- SPEAKER_base */
	0x80, 0xA4, 0xA4, 0x98, 0x98, 0xA4, 0xA4, 0x80, /* -90- SPEAKER_mute */
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, /* -91- SPEAKER_zero */
	0x80, 0x80, 0xA0, 0x90, 0x90, 0xA0, 0x80, 0x80, /* -92- SPEAKER_small */
	0x90, 0x88, 0xA4, 0x94, 0x94, 0xA4, 0x88, 0x90, /* -93- SPEAKER_large */
	0xFF, 0x81, 0x81, 0x8F, 0x89, 0x8A, 0x8C, 0xF8, /* -94- Log Icon */
	0x1F, 0x30, 0x67, 0xCC, 0x98, 0xB3, 0xA7, 0xA7, /* -95- WLAN Icon */
	0x1F, 0x20, 0x51, 0x9B, 0x95, 0x91, 0x91, 0xFF, /* -96- MS Icon_1 */
	0xFF, 0x01, 0x7D, 0x41, 0x7D, 0x05, 0x7D, 0xFF, /* -97- MS Icon_2 */
	0x7E, 0x18, 0x3C, 0x52, 0x91, 0x9D, 0x42, 0x3C, /* -98- Timer Icon*/
	0x3C, 0x66, 0x42, 0x42, 0xFF, 0xE7, 0xE7, 0xFF, /* -99- Hold Icon*/
	0x3C, 0x66, 0xDB, 0xBD, 0xBD, 0xDB, 0xE7, 0xFF, /* -9A- UMD Icon */
	0x3C, 0x76, 0xD3, 0x91, 0x9F, 0xC3, 0x66, 0x3C, /* -9B- Clock Icon */
	0x3F, 0x20, 0xED, 0xED, 0xED, 0xED, 0x20, 0x3F, /* -9C- PC_BATTERY_1 */
	0xFF, 0x00, 0xB6, 0xB6, 0xB6, 0xB6, 0x00, 0xFF, /* -9D- PC_BATTERY_2 */
	0xF0, 0x10, 0xD0, 0xD0, 0xD0, 0xD0, 0x10, 0xF0, /* -9E- PC_BATTERY_3 */
	0x3F, 0x20, 0xE1, 0xE1, 0xE1, 0xE1, 0x20, 0x3F, /* -9F- PC_BATTERY_4 */
	0x3F, 0x20, 0xE0, 0xE0, 0xE0, 0xE0, 0x20, 0x3F, /* -A0- PC_BATTERY_5 */
	0xFF, 0x00, 0x36, 0x36, 0x36, 0x36, 0x00, 0xFF, /* -A1- PC_BATTERY_6 */
	0xFF, 0x00, 0x06, 0x06, 0x06, 0x06, 0x00, 0xFF, /* -A2- PC_BATTERY_7 */
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, /* -A3- PC_BATTERY_8 */
	0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, /* -A4- PC_BATTERY_9 */
	
};
