#include <libheart.h>
#include "../inc/defs.h"

void menu()
{
	hrt_LoadBGTiles((void*)menuTiles, MENUTILES_SIZE);
	hrt_LoadBGPal((void*)menuPal, MENUPAL_SIZE);
	hrt_LoadBGMap((void*)menuMap, MENUMAP_SIZE):
	while(!(keyDown(KEY_START)))
	{
		hrt_VblankIntrWait();
	}
	game();
}