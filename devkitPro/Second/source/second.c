#include "toolbox.h"

int main()
{
    REG_DISPCNT= DCNT_MODE3 | DCNT_BG2;

	for(int y = 72; y < 88; ++y){		//  nested for loops making a 
		for(int x = 112; x < 128; ++x){	//  gradient square
			m3_plot(x, y, RGB15 (31, (y - 72) + (x - 112), (y - 72) + (x - 112)));
		}
	}

    while(1);

    return 0;
}