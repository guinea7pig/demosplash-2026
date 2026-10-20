/*//graphics
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
        GRRLIB_2dMode();
        GRRLIB_DrawImg(200,620,tex_gr,0,0.2,0.2,WHITE);
        GRRLIB_DrawImg(50,0,tex_dem,0,1.4,1.4,WHITE);
        GRRLIB_Camera3dSettings(0.0f,0.0f,10, 0,1,0, 0,0,0);
		GRRLIB_3dMode(10,10,10,true,true);
        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);
        GRRLIB_Render();
    }

    //free fonts
    GRRLIB_FreeTexture(tex_font);
    GRRLIB_FreeTexture(tex_dem); 
    exit(0);
}

*/
#include <grrlib.h>

#include <stdlib.h>
#include <wiiuse/wpad.h>
#include "grrlib_logo_png.h"
#include "demo_png.h"



int main() {
;

    GRRLIB_Init();

    #define WHITE 0xFFFFFFFF

    GRRLIB_Settings.antialias = true;
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);
    GRRLIB_SetBackgroundColour(0x00, 0x00, 0x00, 0xFF);

    while(SYS_MainLoop()) {
        GRRLIB_Camera3dSettings(0.0f,0.0f,10.0f, 0,1,0, 0,0,0);


        GRRLIB_3dMode(0.1,1000,45,0,1);

        //
        GRRLIB_SetLightAmbient(0x404040FF);


        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_ObjectViewBegin();
        GRRLIB_ObjectViewRotate(0.0f,0.0f,180.0f);
        GRRLIB_ObjectViewTrans(0.0f,-1.3f,0.0f);
        GRRLIB_ObjectViewEnd();
        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_ObjectViewBegin();
        GRRLIB_ObjectViewRotate(0.0f,0.0f,-90.0f);
        GRRLIB_ObjectViewTrans(1.3f,0.0f,0.0f);
        GRRLIB_ObjectViewEnd();
        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_ObjectViewBegin();
        GRRLIB_ObjectViewRotate(-90.0f,0.0f,0.0f);
        GRRLIB_ObjectViewTrans(0.0f,0.0f,-1.3f);
        GRRLIB_ObjectViewEnd();
        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_ObjectViewBegin();
        GRRLIB_ObjectViewRotate(90.0f,0.0f,0.0f);
        GRRLIB_ObjectViewTrans(0.0f,0.0f,1.3f);
        GRRLIB_ObjectViewEnd();
        GRRLIB_DrawCone(0.6f, 2.6f, 60, true, 0x502010FF);

        GRRLIB_ObjectViewBegin();
        GRRLIB_ObjectViewEnd();
        GRRLIB_DrawCube( 0.6f, true, 0x102050FF);



        GRRLIB_2dMode();
        GRRLIB_DrawImg(50,0,tex_dem,0,1.4,1.4,WHITE);
        GRRLIB_Render();
    }
    GRRLIB_Exit(); // Be a good boy, clear the memory allocated by GRRLIB

    exit(0);
}
