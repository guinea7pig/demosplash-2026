#include <grrlib.h>
#include <stdlib.h>
#include <math.h>
#include "demo_png.h"
#include <stdio.h>

int main() {
    GRRLIB_Init();
    GRRLIB_texImg *tex_dem = GRRLIB_LoadTexturePNG(demo_png);
    float x = 0;
    float x2 = 1;
    float y2 = 0;
    float y = 0;
    printf("%f", x);

    while(1) {
        y = y + y2;
        x=x+x2;
        if(y<0)y2=-1;
        if(y>480)y2=1;
        if(x<0)x2=-1;
        if(x>680)x2=1;
        printf("curx: %f", x);
        GRRLIB_DrawImg(x,y,tex_dem,0,1.4,1.4,0xFFFFFFFF);
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(tex_dem); 
    exit(0);
}
