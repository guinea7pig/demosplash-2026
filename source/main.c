#include <grrlib.h>
#include <stdlib.h>
#include <math.h>
#include "demo_png.h"
#define RED 0xFF0000FF
#define WHITE 0xFFFFFFFF
int main() {
    GRRLIB_Init();
    GRRLIB_Settings.antialias = true;
    GRRLIB_SetBackgroundColour(0x00, 0x00, 0x00, 0xFF); 
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);

    while(1) {
        GRRLIB_2dMode();
        GRRLIB_DrawImg(50,0,tex_dem,0,1.4,1.4,WHITE);
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(tex_dem); 
    exit(0);
}
