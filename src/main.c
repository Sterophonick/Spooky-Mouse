#include <libheart.h>
#include "../inc/defs.h"
player murky;
indic action_indicator;
interaction intercset[8];
murkypart parts[12];
shadowmurky shadow;
game spooky_mouse;

int main(void)
{
	hrt_EnableSoftReset();
	hrt_EnablemmFrameOnVBL();
	hrt_EnableRTC();
	hrt_EnableCopyOAMOnVBL();
	hrt_Init();
	hrt_DSPSetBGMode(0);
	hrt_DSPEnableBG(2);
	hrt_DSPEnableOBJ();
	hrt_DSPEnableLinearOBJ();
	menu();
	return 0;
}