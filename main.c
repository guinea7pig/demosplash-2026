//graphics
#include <grrlib.h>
#include <stdlib.h>
//math
#include <math.h>
//input
#include <wiiuse/wpad.h>
#include "input.h"
//font
#include "Letter_Gothic_Std_14_Bold_png.h"
#include "grrlib_logo_png.h"
#define RED 0xFF0000FF
#define WHITE 0xFFFFFFFF
#define BLUE 0x0000FFFF
#define BLACK 0x000000FF
int main() {
    //Scene currentScene = SCENE_MENU;
    //graphics library init
    GRRLIB_Init();
    GRRLIB_Settings.antialias = true;
    GRRLIB_SetBackgroundColour(0x00, 0x00, 0x00, 0xFF); 
    GRRLIB_SetLightAmbient(0x333333FF);
    InitInput();
    GRRLIB_texImg *tex_font = GRRLIB_LoadTexture(Letter_Gothic_Std_14_Bold_png);
	GRRLIB_texImg *tex_gr = GRRLIB_LoadTexturePNG(grrlib_logo_png);
    GRRLIB_InitTileSet(tex_font, 11, 24, 32);

    while(1) {
        GRRLIB_2dMode();
		GRRLIB_Printf(100,20,,,demosplash)
        GRRLIBDrawImg(540,420,tex_gr,0,1,1,WHITE)
		GRRLIB_3dMode();
		GRRLIB_ObjectView()//controls object paremters
    }
    GRRLIB_Render();
    }
    //free fonts
    GRRLIB_FreeTexture(tex_font);
 
    exit(0);
}
