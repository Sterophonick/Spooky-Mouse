typedef struct
{
	u8 murkyx;
	u8 murkyy;
	u8 animstate;
	u8 animframe;
	u8 direction;
}player;

typedef struct
{
	u8 state;
}indic;

typedef struct
{
	u8 room;
	u8 x8;
	u8 y8;
	u8 effect;
}interaction;

typedef struct
{
	u8 part;
	u8 xv;
	u8 yv;
	u8 x;
	u8 y;
}murkypart;

typedef struct
{
	u8 frame;
	u8 x;
	u8 direction;
}shadowmurky;

typedef struct
{
	u8 room;
	u8 deathcnt;
}game;

#define MENUTILES_SIZE ??
#define MENUPAL_SIZE ??
#define MENUMAP_SIZE ??


extern void menu();