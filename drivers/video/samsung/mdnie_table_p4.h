#ifndef __MDNIE_TABLE_P4_WACOM_H__
#define __MDNIE_TABLE_P4_WACOM_H__

#include "s3cfb_mdnie.h"


static const unsigned char power_lut[2][9] = {
	{0x42, 0x47, 0x3E, 0x52, 0x42, 0x3F, 0x3A, 0x37, 0x3F},
	{0x38, 0x3d, 0x34, 0x48, 0x38, 0x35, 0x30, 0x2d, 0x35},
};

static const unsigned short tune_dynamic_gallery_cabcOff[] = {
	//start P4 dynamic, gallery, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x03ff,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xFFf8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1a00,  //GAMMA n1d 2517
	0x00D7, 0x1a00,
	0x00D8, 0x1a00,
	0x00D9, 0x1a00,
	0x00DA, 0x1a00,
	0x00DB, 0x1a00,
	0x00DC, 0x1a00,
	0x00DD, 0x1a00,
	0x00DE, 0x1a00,
	0x00DF, 0x1a00,
	0x00E0, 0xa40c,
	0x00E1, 0xa40c,
	0x00E2, 0xa40c,
	0x00E3, 0xa40c,
	0x00E4, 0xa40c,
	0x00E5, 0xa40c,
	0x00E6, 0xa40c,
	0x00E7, 0xa40c,
	0x00E8, 0xa40c,
	0x00E9, 0xa40c,
	0x00EA, 0xa40c,
	0x00EB, 0x1c26,
	0x00EC, 0x1652,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_ui_cabcOff[] = {
	//start P4 dynamic, ui, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xFFf8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1a00,  //GAMMA n1d 2517
	0x00D7, 0x1a00,
	0x00D8, 0x1a00,
	0x00D9, 0x1a00,
	0x00DA, 0x1a00,
	0x00DB, 0x1a00,
	0x00DC, 0x1a00,
	0x00DD, 0x1a00,
	0x00DE, 0x1a00,
	0x00DF, 0x1a00,
	0x00E0, 0xa40c,
	0x00E1, 0xa40c,
	0x00E2, 0xa40c,
	0x00E3, 0xa40c,
	0x00E4, 0xa40c,
	0x00E5, 0xa40c,
	0x00E6, 0xa40c,
	0x00E7, 0xa40c,
	0x00E8, 0xa40c,
	0x00E9, 0xa40c,
	0x00EA, 0xa40c,
	0x00EB, 0x1c26,
	0x00EC, 0x1652,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_video_cabcOff[] = {
	//start P4 dynamic, video, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x03ff,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4,0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1a00,  //GAMMA n1d 2517
	0x00D7, 0x1a00,
	0x00D8, 0x1a00,
	0x00D9, 0x1a00,
	0x00DA, 0x1a00,
	0x00DB, 0x1a00,
	0x00DC, 0x1a00,
	0x00DD, 0x1a00,
	0x00DE, 0x1a00,
	0x00DF, 0x1a00,
	0x00E0, 0xa40c,
	0x00E1, 0xa40c,
	0x00E2, 0xa40c,
	0x00E3, 0xa40c,
	0x00E4, 0xa40c,
	0x00E5, 0xa40c,
	0x00E6, 0xa40c,
	0x00E7, 0xa40c,
	0x00E8, 0xa40c,
	0x00E9, 0xa40c,
	0x00EA, 0xa40c,
	0x00EB, 0x1c26,
	0x00EC, 0x1652,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_vtcall_cabcOff[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_gallery_cabcOff[] = {
	//start P4 movie, gallery, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x1500,	//GAMMA p1va-0.5
	0x00D7, 0x1500,
	0x00D8, 0x1500,
	0x00D9, 0x1500,
	0x00DA, 0x1500,
	0x00DB, 0x1500,
	0x00DC, 0x1500,
	0x00DD, 0x1500,
	0x00DE, 0x1500,
	0x00DF, 0x1500,
	0x00E0, 0x1500,
	0x00E1, 0x1500,
	0x00E2, 0xa315,
	0x00E3, 0xa315,
	0x00E4, 0xa315,
	0x00E5, 0xa315,
	0x00E6, 0xa315,
	0x00E7, 0xa315,
	0x00E8, 0xa315,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_ui_cabcOff[] = {
	//start P4 movie, ui, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4,0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x1500,	//GAMMA p1va-0.5
	0x00D7, 0x1500,
	0x00D8, 0x1500,
	0x00D9, 0x1500,
	0x00DA, 0x1500,
	0x00DB, 0x1500,
	0x00DC, 0x1500,
	0x00DD, 0x1500,
	0x00DE, 0x1500,
	0x00DF, 0x1500,
	0x00E0, 0x1500,
	0x00E1, 0x1500,
	0x00E2, 0xa315,
	0x00E3, 0xa315,
	0x00E4, 0xa315,
	0x00E5, 0xa315,
	0x00E6, 0xa315,
	0x00E7, 0xa315,
	0x00E8, 0xa315,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_video_cabcOff[] = {
	//start P4 movie, video, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x2000,	//Gamma p1va+2
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x1c06,
	0x00E3, 0x1c06,
	0x00E4, 0x1c06,
	0x00E5, 0x1c06,
	0x00E6, 0x1c06,
	0x00E7, 0x1c06,
	0x00E8, 0x1c06,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_vtcall_cabcOff[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_gallery_cabcOff[] = {
	//start P4 standard, gallery, cabcOff
	0x0001, 0x0060,	//LABC CABC
	0x002c, 0x0fff,	//DNR bypass
	0x002d, 0x1900,	//DNR bypass
	0x002e, 0x0000,	//DNR bypass
	0x002f, 0x0FFF,	//DNR bypass
	0x003a, 0x000D,	//HDTR DE CS
	0x003B, 0x0030,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0100,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4,0x4640,	//CABC PWM set
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1500,	//GAMMA p1va-0.5
	0x00D7, 0x1500,
	0x00D8, 0x1500,
	0x00D9, 0x1500,
	0x00DA, 0x1500,
	0x00DB, 0x1500,
	0x00DC, 0x1500,
	0x00DD, 0x1500,
	0x00DE, 0x1500,
	0x00DF, 0x1500,
	0x00E0, 0x1500,
	0x00E1, 0x1500,
	0x00E2, 0xa315,
	0x00E3, 0xa315,
	0x00E4, 0xa315,
	0x00E5, 0xa315,
	0x00E6, 0xa315,
	0x00E7, 0xa315,
	0x00E8, 0xa315,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_ui_cabcOff[] = {
	//start P4 standard, ui, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0100,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4,0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1500,	//GAMMA p1va-0.5
	0x00D7, 0x1500,
	0x00D8, 0x1500,
	0x00D9, 0x1500,
	0x00DA, 0x1500,
	0x00DB, 0x1500,
	0x00DC, 0x1500,
	0x00DD, 0x1500,
	0x00DE, 0x1500,
	0x00DF, 0x1500,
	0x00E0, 0x1500,
	0x00E1, 0x1500,
	0x00E2, 0xa315,
	0x00E3, 0xa315,
	0x00E4, 0xa315,
	0x00E5, 0xa315,
	0x00E6, 0xa315,
	0x00E7, 0xa315,
	0x00E8, 0xa315,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_video_cabcOff[] = {
	//start P4 standard, video, cabcOff
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0110,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4,0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x2000,	//Gamma p1va+2
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x1c06,
	0x00E3, 0x1c06,
	0x00E4, 0x1c06,
	0x00E5, 0x1c06,
	0x00E6, 0x1c06,
	0x00E7, 0x1c06,
	0x00E8, 0x1c06,
	0x00E9, 0xa315,
	0x00EA, 0xa315,
	0x00EB, 0xa315,
	0x00EC, 0xa315,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_vtcall_cabcOff[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_gallery_cabcOn[] = {
	//start P4 dynamic, gallery, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x03ff,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1a00,	//GAMMA n1dc, 2215
	0x00D7, 0x1a00,
	0x00D8, 0x1a00,
	0x00D9, 0x1a00,
	0x00DA, 0x1a00,
	0x00DB, 0xa407,
	0x00DC, 0xa407,
	0x00DD, 0xa407,
	0x00DE, 0xa407,
	0x00DF, 0xa407,
	0x00E0, 0xa407,
	0x00E1, 0xa407,
	0x00E2, 0xa407,
	0x00E3, 0xa407,
	0x00E4, 0xa407,
	0x00E5, 0xa407,
	0x00E6, 0xa407,
	0x00E7, 0xa407,
	0x00E8, 0xa407,
	0x00E9, 0xa407,
	0x00EA, 0xa407,
	0x00EB, 0x1844,
	0x00EC, 0x1461,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_ui_cabcOn[] = {
	//start P4 dynamic, ui, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x1a00,	//GAMMA n1dc, 2215
	0x00D7, 0x1a00,
	0x00D8, 0x1a00,
	0x00D9, 0x1a00,
	0x00DA, 0x1a00,
	0x00DB, 0xa407,
	0x00DC, 0xa407,
	0x00DD, 0xa407,
	0x00DE, 0xa407,
	0x00DF, 0xa407,
	0x00E0, 0xa407,
	0x00E1, 0xa407,
	0x00E2, 0xa407,
	0x00E3, 0xa407,
	0x00E4, 0xa407,
	0x00E5, 0xa407,
	0x00E6, 0xa407,
	0x00E7, 0xa407,
	0x00E8, 0xa407,
	0x00E9, 0xa407,
	0x00EA, 0xa407,
	0x00EB, 0x1844,
	0x00EC, 0x1461,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_video_cabcOn[] = {
	//start P4 dynamic, video, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x03ff,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x01a0,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x2600,	//GAMMA p5_dvc 2011
	0x00D7, 0x2600,
	0x00D8, 0x2600,
	0x00D9, 0x2600,
	0x00DA, 0x2501,
	0x00DB, 0x2501,
	0x00DC, 0x2501,
	0x00DD, 0x2501,
	0x00DE, 0x2501,
	0x00DF, 0x2501,
	0x00E0, 0x2501,
	0x00E1, 0x2501,
	0x00E2, 0x2501,
	0x00E3, 0x2501,
	0x00E4, 0x2501,
	0x00E5, 0x2501,
	0x00E6, 0x2501,
	0x00E7, 0x2501,
	0x00E8, 0x2501,
	0x00E9, 0x2501,
	0x00EA, 0x1f20,
	0x00EB, 0x136b,
	0x00EC, 0x1081,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_vtcall_cabcOn[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_gallery_cabcOn[] = {
	//start P4 movie, gallery, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x3f00,	//GAMMA p5_mc 22
	0x00D7, 0x2003,
	0x00D8, 0x2003,
	0x00D9, 0x2003,
	0x00DA, 0x2003,
	0x00DB, 0x2003,
	0x00DC, 0x2003,
	0x00DD, 0x2003,
	0x00DE, 0x2003,
	0x00DF, 0x2003,
	0x00E0, 0x2003,
	0x00E1, 0x2003,
	0x00E2, 0x2003,
	0x00E3, 0x2003,
	0x00E4, 0x2003,
	0x00E5, 0x2003,
	0x00E6, 0x2003,
	0x00E7, 0x2003,
	0x00E8, 0x2003,
	0x00E9, 0x2003,
	0x00EA, 0x2003,
	0x00EB, 0x2003,
	0x00EC, 0x2003,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_ui_cabcOn[] = {
	//start P4 movie, ui, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x3f00,	//GAMMA p5_mc 22
	0x00D7, 0x2003,
	0x00D8, 0x2003,
	0x00D9, 0x2003,
	0x00DA, 0x2003,
	0x00DB, 0x2003,
	0x00DC, 0x2003,
	0x00DD, 0x2003,
	0x00DE, 0x2003,
	0x00DF, 0x2003,
	0x00E0, 0x2003,
	0x00E1, 0x2003,
	0x00E2, 0x2003,
	0x00E3, 0x2003,
	0x00E4, 0x2003,
	0x00E5, 0x2003,
	0x00E6, 0x2003,
	0x00E7, 0x2003,
	0x00E8, 0x2003,
	0x00E9, 0x2003,
	0x00EA, 0x2003,
	0x00EB, 0x2003,
	0x00EC, 0x2003,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_video_cabcOn[] = {
	//start P4 movie, video, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xffee,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00e9,	//yw B
	0x00D6, 0x6800,	//GAMMA p5_mvc 20
	0x00D7, 0x2007,
	0x00D8, 0x2007,
	0x00D9, 0x2007,
	0x00DA, 0x2007,
	0x00DB, 0x2007,
	0x00DC, 0x2007,
	0x00DD, 0x2007,
	0x00DE, 0x2007,
	0x00DF, 0x2007,
	0x00E0, 0x2007,
	0x00E1, 0x2007,
	0x00E2, 0x2007,
	0x00E3, 0x2007,
	0x00E4, 0x2007,
	0x00E5, 0x2007,
	0x00E6, 0x2007,
	0x00E7, 0x2007,
	0x00E8, 0x2007,
	0x00E9, 0x2007,
	0x00EA, 0x2007,
	0x00EB, 0x2007,
	0x00EC, 0x1a33,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_vtcall_cabcOn[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_gallery_cabcOn[] = {
	//start P4 standard, gallery, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x0030,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0100,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x3f00,	//GAMMA n1sc, 2217
	0x00D7, 0x2003,
	0x00D8, 0x2003,
	0x00D9, 0x2003,
	0x00DA, 0x2003,
	0x00DB, 0x2003,
	0x00DC, 0x2003,
	0x00DD, 0x2003,
	0x00DE, 0x2003,
	0x00DF, 0x2003,
	0x00E0, 0x2003,
	0x00E1, 0x2003,
	0x00E2, 0x2003,
	0x00E3, 0x2003,
	0x00E4, 0x2003,
	0x00E5, 0x2003,
	0x00E6, 0x2003,
	0x00E7, 0x2003,
	0x00E8, 0x2100,
	0x00E9, 0xa40c,
	0x00EA, 0xa40c,
	0x00EB, 0x1c26,
	0x00EC, 0x1652,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_ui_cabcOn[] = {
	//start P4 standard, ui, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR CS
	0x003B, 0x03ff,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0100,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x3f00, //GAMMA n1sc, 2217
	0x00D7, 0x2003,
	0x00D8, 0x2003,
	0x00D9, 0x2003,
	0x00DA, 0x2003,
	0x00DB, 0x2003,
	0x00DC, 0x2003,
	0x00DD, 0x2003,
	0x00DE, 0x2003,
	0x00DF, 0x2003,
	0x00E0, 0x2003,
	0x00E1, 0x2003,
	0x00E2, 0x2003,
	0x00E3, 0x2003,
	0x00E4, 0x2003,
	0x00E5, 0x2003,
	0x00E6, 0x2003,
	0x00E7, 0x2003,
	0x00E8, 0x2100,
	0x00E9, 0xa40c,
	0x00EA, 0xa40c,
	0x00EB, 0x1c26,
	0x00EC, 0x1652,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_video_cabcOn[] = {
	//start P4 standard, video, cabcOn
	0x0001, 0x0070,	//SCR LABC CABC
	0x002c, 0x0FFF,	//DNR
	0x002d, 0x1905,	//dirnum,decon7
	0x002e, 0x0507,	//decon5,maskth
	0x002f, 0x0000,	//
	0x003A, 0x000D,	//HDTR DE CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0110,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0072, 0x0000,	//CABC Dgain
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	//0x0076, 0x383d,	//PowerLUT 3C50
	//0x0077, 0x3442,	//PowerLUT 2D64
	//0x0078, 0x3835,	//PowerLUT 3C32
	//0x0079, 0x302d,	//PowerLUT 1E00
	//0x007a, 0x3500,	//PowerLUT 3200
	0x007C, 0x0002,	//Dynamic LCD
	0x00b4, 0x5640,	//CABC PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xfff5,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x2600,	//GAMMA p5_svc 2013
	0x00D7, 0x2600,
	0x00D8, 0x2600,
	0x00D9, 0x2401,
	0x00DA, 0x2401,
	0x00DB, 0x2401,
	0x00DC, 0x2401,
	0x00DD, 0x2401,
	0x00DE, 0x2401,
	0x00DF, 0x2401,
	0x00E0, 0x2401,
	0x00E1, 0x2401,
	0x00E2, 0x2401,
	0x00E3, 0x2401,
	0x00E4, 0x2401,
	0x00E5, 0x2401,
	0x00E6, 0x2401,
	0x00E7, 0x2401,
	0x00E8, 0x2401,
	0x00E9, 0x2401,
	0x00EA, 0x2016,
	0x00EB, 0x1654,
	0x00EC, 0x1179,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_vtcall_cabcOn[] = {
	END_SEQ, 0x0000,
};

static const unsigned short tune_camera[] = {
	//start P4 camera
	0x0001, 0x0060,	//SCR LABC
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR DE CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xFFf8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x2000,	//GAMMA 2.2
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0x2000,
	0x00EB, 0x2000,
	0x00EC, 0x2000,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_camera_outdoor[] = {
	//start P4 camera, ove
	0x0001, 0x0062,	//SCR LABC OVE
	0x002c, 0x0fff,	//DNR bypass 0x003C
	0x002d, 0x1900,	//DNR bypass 0x0a08
	0x002e, 0x0000,	//DNR bypass 0x1010
	0x002f, 0x0fff,	//DNR bypass 0x0400
	0x003A, 0x0009,	//HDTR DE CS
	0x003B, 0x0000,	//DE SHARPNESS
	0x003C, 0x0000,	//NOISE LEVEL
	0x003F, 0x0080,	//CS GAIN
	0x0042, 0x0000,	//DE TH (MAX DIFF)
	0x0054, 0x6050,  //OVE
	//0x00b4, 0x4640,	//Count PWM
	0x00c8, 0x0000,	//kb R	SCR
	0x00c9, 0x0000,	//gc R
	0x00ca, 0xffff,	//rm R
	0x00cb, 0xffff,	//yw R
	0x00cc, 0x0000,	//kb G
	0x00cd, 0xffff,	//gc G
	0x00ce, 0x0000,	//rm G
	0x00cf, 0xFFf8,	//yw G
	0x00d0, 0x00ff,	//kb B
	0x00d1, 0x00ff,	//gc B
	0x00d2, 0x00ff,	//rm B
	0x00d3, 0x00ff,	//yw B
	0x00D6, 0x2000,	//GAMMA 2.2
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0x2000,
	0x00EB, 0x2000,
	0x00EC, 0x2000,
	0x00ED, 0xFF00,
	0x00D5, 0x0001,
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_cabcOff[] = {
	//start P4 cold, cabcOff
	0x0001, 0x0064,	//SCR LABC MCM
	0x005b, 0x0064,	//MCM 10000K
	0x0063, 0x8a00,	//cb
	0x0065, 0x0073,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_outdoor_cabcOff[] = {
	//start P4 cold, ove, cabcOff
	0x0001, 0x0066,	//SCR LABC MCM OVE
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x005b, 0x0064,	//MCM 10000K
	0x0063, 0x8a00,	//cb
	0x0065, 0x0073,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_outdoor_cabcOff[] = {
	//start P4 ove, cabcOff
	0x0001, 0x0062,	//SCR LABC OVE
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_cabcOff[] = {
	//start P4 warm, cabcOff
	0x0001, 0x0064,	//SCR LABC MCM
	0x005b, 0x0028,	//MCM 4000K
	0x0061, 0x7600,	//cb
	0x0063, 0x008d,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_outdoor_cabcOff[] = {
	//start P4 warm, ove, cabcOff
	0x0001, 0x0066,	//SCR LABC MCM OVE
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x005b, 0x0028,	//MCM 4000K
	0x0061, 0x7600,	//cb
	0x0063, 0x008d,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_cabcOn[] = {
	//start P4 cold, cabcOn
	0x0001, 0x0074,	//SCR LABC MCM CABC
	0x005b, 0x0064,	//MCM 10000K
	0x0063, 0x8a00,	//cb
	0x0065, 0x0073,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_outdoor_cabcOn[] = {
	//start P4 cold, ove, cabcOn
	0x0001, 0x0076,	//SCR LABC MCM OVE CABC
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x005b, 0x0064,	//MCM 10000K
	0x0063, 0x8a00,	//cb
	0x0065, 0x0073,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_outdoor_cabcOn[] = {
	//start P4 ove, cabcOn
	0x0001, 0x0072,	//SCR LABC OVE CABC
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_cabcOn[] = {
	//start P4 warm, cabcOn
	0x0001, 0x0074,	//SCR LABC MCM CABC
	0x005b, 0x0028,	//MCM 4000K
	0x0061, 0x7600,	//cb
	0x0063, 0x008d,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_outdoor_cabcOn[] = {
	//start P4 warm, ove, cabcOn
	0x0001, 0x0076,	//SCR LABC MCM OVE CABC
	0x0054, 0x6050,	//OVE Lightness Chroma
	0x005b, 0x0028,	//MCM 4000K
	0x0061, 0x7600,	//cb
	0x0063, 0x008d,	//cr
	0x0028, 0x0000,	//Register Mask
	//end
	END_SEQ, 0x0000,
};


struct mdnie_tunning_info etc_table[CABC_MAX][OUTDOOR_MAX][TONE_MAX] = {
	{
		{
			{"NORMAL",		NULL},
			{"WARM",		tune_warm_cabcOff},
			{"COLD",		tune_cold_cabcOff},
		},
		{
			{"NORMAL_OUTDOOR",	tune_outdoor_cabcOff},
			{"WARM_OUTDOOR",	tune_warm_outdoor_cabcOff},
			{"COLD_OUTDOOR",	tune_cold_outdoor_cabcOff},
		},
	},
	{
		{
			{"NORMAL_CABC",		NULL},
			{"WARM_CABC",		tune_warm_cabcOn},
			{"COLD_CABC",		tune_cold_cabcOn},
		},
		{
			{"NORMAL_OUTDOOR_CABC",	tune_outdoor_cabcOn},
			{"WARM_OUTDOOR_CABC",	tune_warm_outdoor_cabcOn},
			{"COLD_OUTDOOR_CABC",	tune_cold_outdoor_cabcOn},
		},
	},
};

struct mdnie_tunning_info_cabc tunning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"DYNAMIC_UI",			tune_dynamic_ui_cabcOff,		0},
			{"DYNAMIC_VIDEO_NORMAL",	tune_dynamic_video_cabcOff,	LUT_VIDEO},
			{"DYNAMIC_VIDEO_WARM",		tune_dynamic_video_cabcOff,	LUT_VIDEO},
			{"DYNAMIC_VIDEO_COLD",		tune_dynamic_video_cabcOff,	LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"DYNAMIC_UI",			tune_dynamic_ui_cabcOff,		0},
			{"DYNAMIC_GALLERY",		tune_dynamic_gallery_cabcOff,	0},
			{"DYNAMIC_VT",			tune_dynamic_vtcall_cabcOff,	0},
		}, {
			{"STANDARD_UI",			tune_standard_ui_cabcOff,		0},
			{"STANDARD_VIDEO_NORMAL",	tune_standard_video_cabcOff,LUT_VIDEO},
			{"STANDARD_VIDEO_WARM",		tune_standard_video_cabcOff,LUT_VIDEO},
			{"STANDARD_VIDEO_COLD",		tune_standard_video_cabcOff,LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"STANDARD_UI",			tune_standard_ui_cabcOff,		0},
			{"STANDARD_GALLERY",		tune_standard_gallery_cabcOff,	0},
			{"STANDARD_VT",			tune_standard_vtcall_cabcOff,	0},
		}, {
			{"MOVIE_UI",			tune_movie_ui_cabcOff,		0},
			{"MOVIE_VIDEO_NORMAL",		tune_movie_video_cabcOff,	LUT_VIDEO},
			{"MOVIE_VIDEO_WARM",		tune_movie_video_cabcOff,	LUT_VIDEO},
			{"MOVIE_VIDEO_COLD",		tune_movie_video_cabcOff,	LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"MOVIE_UI",			tune_movie_ui_cabcOff,		0},
			{"MOVIE_GALLERY",		tune_movie_gallery_cabcOff,		0},
			{"MOVIE_VT",			tune_movie_vtcall_cabcOff,		0},
		},
	},
	{
		{
			{"DYNAMIC_UI_CABC",		tune_dynamic_ui_cabcOn,		0},
			{"DYNAMIC_VIDEO_NORMAL_CABC",	tune_dynamic_video_cabcOn,	LUT_VIDEO},
			{"DYNAMIC_VIDEO_WARM_CABC",	tune_dynamic_video_cabcOn,	LUT_VIDEO},
			{"DYNAMIC_VIDEO_COLD",		tune_dynamic_video_cabcOn,	LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"DYNAMIC_UI_CABC",		tune_dynamic_ui_cabcOn,		0},
			{"DYNAMIC_GALLERY_CABC",	tune_dynamic_gallery_cabcOn,	0},
			{"DYNAMIC_VT_CABC",		tune_dynamic_vtcall_cabcOn,		0},
		}, {
			{"STANDARD_UI_CABC",		tune_standard_ui_cabcOn,		0},
			{"STANDARD_VIDEO_NORMAL_CABC",	tune_standard_video_cabcOn,	LUT_VIDEO},
			{"STANDARD_VIDEO_WARM_CABC",	tune_standard_video_cabcOn,	LUT_VIDEO},
			{"STANDARD_VIDEO_COLD_CABC",	tune_standard_video_cabcOn,	LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"STANDARD_UI_CABC",		tune_standard_ui_cabcOn,		0},
			{"STANDARD_GALLERY_CABC",	tune_standard_gallery_cabcOn,	0},
			{"STANDARD_VT_CABC",		tune_standard_vtcall_cabcOn,	0},
		}, {
			{"MOVIE_UI_CABC",		tune_movie_ui_cabcOn,		0},
			{"MOVIE_VIDEO_NORMAL_CABC",	tune_movie_video_cabcOn,	LUT_VIDEO},
			{"MOVIE_VIDEO_WARM_CABC",	tune_movie_video_cabcOn,	LUT_VIDEO},
			{"MOVIE_VIDEO_COLD_CABC",	tune_movie_video_cabcOn,	LUT_VIDEO},
			{"CAMERA",			tune_camera,				0},
			{"MOVIE_UI_CABC",		tune_movie_ui_cabcOn,		0},
			{"MOVIE_GALLERY_CABC",		tune_movie_gallery_cabcOn,		0},
			{"MOVIE_VT_CABC",		tune_movie_vtcall_cabcOn,		0},
		},
	},
};

#endif /* __MDNIE_TABLE_P4_H__ */
