#include <grrlib.h>
#include <stdlib.h>
int main() {
    GRRLIB_Init();
    
    while(1) {
        GRRLIB_Render();
    }
    GRRLIB_FreeTexture(d); 
    exit(0);
}
