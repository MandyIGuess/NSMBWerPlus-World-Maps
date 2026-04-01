#pragma once
#include <game.h>

class dScWMap_c : public dScene_c {
public:
    int getCourseNumFromPointName(u8 *pointName);
    static void setWorldMapArcName(u8 worldNo, char *pBuffer); // 0x80102780

    static char mWmArcName[6]; // 0x8042A520
    static u8 m_WorldNo; // 0x8042A52D
    static dScWMap_c *m_instance; // 0x8042A514
};