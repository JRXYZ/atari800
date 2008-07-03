
#ifndef _XEP80_FONTS_H_
#define _XEP80_FONTS_H_

#include "config.h"
#include "atari.h"
#include "xep80.h"

#define XEP80_FONTS_NUM_FONT_SETS   3
#define XEP80_FONTS_NUM_FONTS       8
#define XEP80_FONTS_CHAR_COUNT    256

#define XEP80_FONTS_REV_FONT_BIT        0x1
#define XEP80_FONTS_UNDER_FONT_BIT      0x2
#define XEP80_FONTS_BLK_FONT_BIT        0x4

#define XEP80_FONTS_UNDER_ROW     10

extern UBYTE XEP80_Fonts_atari_fonts[XEP80_FONTS_NUM_FONT_SETS][XEP80_FONTS_NUM_FONTS][XEP80_FONTS_CHAR_COUNT][XEP80_CHAR_HEIGHT][XEP80_CHAR_WIDTH];
extern UBYTE XEP80_Fonts_oncolor;
extern UBYTE XEP80_Fonts_offcolor;

extern int XEP80_Fonts_inited;

void XEP80_Fonts_InitFonts(void);

#endif /* _XEP80_FONTS_H_ */