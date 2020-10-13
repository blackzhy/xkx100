// Room: /d/nanshaolin/lwc14.c
// Last Modified by winder on May. 29 2001

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
这里是少林寺的练武场。由无数块巨大的花岗岩石板铺就。上千年
的踩踏已使得这些石板如同镜子般平整光滑。武场中央竖立着一个制作
精巧的练功铜人，一些壮年僧人正狠辣的向它出招。
LONG );
	set("exits", ([
		"east" : __DIR__"lwc13",
		"south" : __DIR__"lwc16",
	]));
	set("objects",([
		__DIR__"obj/tong-ren" : 1,
	]));
	set("outdoors", "nanshaolin");
	set("coor/x", 1850);
	set("coor/y", -6230);
	set("coor/z", 10);
	setup();
	replace_program(ROOM);
}
