// some of this code (mostly the inilation scpits) contain some code fromb a grrlib template exsample. https://github.com/GRRLIB/GRRLIB/tree/master/examples/template
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
#define version 1.6
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
    //audio init
    //ASND_Init();
	//MP3Player_Init();
    //controller init
    InitInput();
    //font intit
    GRRLIB_texImg *tex_font = GRRLIB_LoadTexture(Letter_Gothic_Std_14_Bold_png);
    GRRLIB_InitTileSet(tex_font, 11, 24, 32);

    while(1) {
        GRRLIB_2dMode();
      
		GRRLIB_3dMode();
		GRRLIB_ObjectView()//controls object paremters
    }
    GRRLIB_Render();
    }
    //free fonts
    GRRLIB_FreeTexture(tex_font);
 
    exit(0);
}
