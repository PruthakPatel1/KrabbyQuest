#include "sprites.h"

// Hides all sprites in the shadowOAM; Must DMA the shadowOAM into the OAM after calling this function
void hideSprites() {
    // TODO: Write this function (you will have written it already if you've completed Lab08) 
    for (int i = 0; i < 128; i++)
    {
        shadowOAM[i].attr0 = ATTR0_HIDE;
    }
    
}