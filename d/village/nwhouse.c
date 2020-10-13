// Room: /d/village/nwhouse.c

inherit ROOM;

void create()
{
        set("short", "民房");
	set("long", @LONG
这是一个小房间，屋子里飘着一股大葱加香粉的味道。靠墙摆着张大
床，床头有个小梳妆台。
LONG );
        set("exits", ([ /* sizeof() == 1 */
            "northeast" : __DIR__"nwroad2",
        ]));
        set("objects", ([
                __DIR__"npc/cuihua": 1
        ]) );
//        set("no_clean_up", 0);

	set("coor/x", -990);
	set("coor/y", 270);
	set("coor/z", 0);
	setup();
        replace_program(ROOM);
}
 