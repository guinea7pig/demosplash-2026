#include <grrlib.h>
#include <stdlib.h>
int main() {
    GRRLIB_Init();
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
        GRRLIB_Printf(465,450,NULL,RED,1,"made with grrlib");
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(d); 
    exit(0);
}
