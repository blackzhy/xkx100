// yujinxiang.c
#include <ansi.h>
#include <armor.h>
inherit HEAD;

void create()
{
        set_name(YEL"郁金香"NOR, ({"yujinxiang"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "朵");
                set("long", 
"一朵富丽华贵的"YEL"郁金香。\n"NOR);
                set("value", 1000);
                set("flower", 1);
                set("material", "plant");
                set_weight(10);
                set("armor_prop/armor", 0);
                set("armor_prop/personality", 3);
                set("wear_msg", "$N轻轻地把一朵$n戴在头上。\n");
                set("unequip_msg", "$N轻轻地把$n从头上摘了下来。\n");
        }
        setup();
}