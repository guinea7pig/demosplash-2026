#include <grrlib.h>
#include <stdlib.h>
#include "demo_png.h"
int main() {
    GRRLIB_Init();
    GRRLIB_texImg *d = GRRLIB_LoadTexturePNG(demo_png);
    float x = 0;
    float x2 = 1;
    float y2 = 1;
    float y = 0;
    while(1) {
        y = y + y2;
        x=x+x2;
        if(y<0)y2=1;
        if(y>370)y2=-1;
        if(x<0)x2=1;
        if(x>450)x2=-1;
        GRRLIB_DrawImg(x,y,d,0,0.5,0.5,0xFFFFFFFF);
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(d); 
    exit(0);
}
