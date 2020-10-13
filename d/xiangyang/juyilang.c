// Room: /d/xiangyang/juyilang.c
// Date: Jan. 8 1999 by Winder

inherit ROOM;

void create()
{
	set("short", "水上走廊");
	set("long", @LONG
这是一条笔直的走廊，廊下是一湖池水。湖水映着长长垂
柳，碧绿清澈，你能看见一些鱼在游来游去。南面就是一个大
花园，园内东西两侧各有一排厢房。
LONG );
        set("outdoors", "xiangyang");
	set("no_clean_up", 0);

	set("exits", ([
		"south" : __DIR__"juyihuayuan",
		"north" : __DIR__"juyiyuan",
	]));
	set("coor/x", -530);
	set("coor/y", -502);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}