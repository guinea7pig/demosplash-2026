#include <grrlib.h>
#include <stdlib.h>
#include <math.h>
#include "demo_png.h"

int main() {
    GRRLIB_Init();
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);
    float x = 0;
    float x2 = 1;
    float y2 = 1;
    float y = 0;
    while(1) {
        y = y + y2;
        x=x+x2;
        if(y>0)y2=-1;
        GRRLIB_DrawImg(x,y,tex_dem,0,1.4,1.4,0xFFFFFFFF);
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(tex_dem); 
    exit(0);
}
