#include <grrlib.h>
#include <stdlib.h>
#include <math.h>
#include "demo_png.h"
int main() {
    x=0;
    x1=1
    y2=1;
    y=0;
    GRRLIB_Init();
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);
    while(1) {
        y=y+y2;
        x=x+x2;
        if(y>0)y2=-1;
        GRRLIB_DrawImg(50,0,tex_dem,0,1.4,1.4,0xFFFFFFFF);
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(tex_dem); 
    exit(0);
}
