// Room: /d/city/jiaowai3.c
// Jan. 8.1998 by Venus
#include <room.h>
inherit ROOM;

void create()
{
	set("short", "树林");
	set("long", @LONG
扬州郊外的树林，松枝挺拔，乔木横斜。林间小道，逶迤随远。林
中蝉鸣厮闹，鸟啼宛转，使你顿时烦意尽消。
    地上落了很多树枝石块。
LONG );
	set("exits", ([
		"north" : __DIR__"jiaowai2",
		"south" : __DIR__"jiaowai4",
	]));
	set("objects", ([
		__DIR__"obj/shitou": 2,
		"/clone/medicine/vegetable/chantui" : random(2),
	]));
	set("outdoors", "yangzhoue");
	set("coor/x", 70);
	set("coor/y", -40);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}