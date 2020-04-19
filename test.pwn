#include <a_samp>
#include "u-macros.inc"

main() {
    F_Format();
}

stock F_Format()
{
    new String[20];
    Format::(String, "%d", 1);
    printf(String);
}

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    CONNECTED playerid
    {
        
    }
    if(Pressed(KEY_FIRE))
    {
        print("KEY_FIRE Pressed");
    }
    else if(Released(KEY_SPRINT))
    {
        print("KEY_SPRINT Released");
    }
    else if(Hold(KEY_JUMP))
    {
        print("KEY_JUMP Held");
    }
}