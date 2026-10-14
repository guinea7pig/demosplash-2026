//graphics
#include <grrlib.h>
#include <stdlib.h>
//math
#include <math.h>
//input
#include <wiiuse/wpad.h>
//font
#include "Letter_Gothic_Std_14_Bold_png.h"
#include "grrlib_logo_png.h"
#include "demo_png.h"
#define RED 0xFF0000FF
#define WHITE 0xFFFFFFFF
#define BLUE 0x0000FFFF
#define BLACK 0x000000FF
int main() {
    GRRLIB_Init();
    GRRLIB_Settings.antialias = true;
    GRRLIB_SetBackgroundColour(0x00, 0x00, 0x00, 0xFF); 
    GRRLIB_SetLightAmbient(0x333333FF);
    GRRLIB_texImg *tex_font = GRRLIB_LoadTexture(Letter_Gothic_Std_14_Bold_png);
	GRRLIB_texImg *tex_gr = GRRLIB_LoadTexturePNG(grrlib_logo_png);
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);
    GRRLIB_InitTileSet(tex_font, 11, 24, 32);

    while(1) {
        GRRLIB_DrawImg(200,420,tex_gr,0,0.2,0.2,WHITE);
        GRRLIB_DrawImg(50,20,tex_dem,0,1.4,1.4,WHITE);
		//GRRLIB_3dMode(10,10,true,true);
        GRRLIB_Render();

    }

    //free fonts
    GRRLIB_FreeTexture(tex_font);
 
    exit(0);
}
