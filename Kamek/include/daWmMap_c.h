#pragma once
#include <dWmMapModel_c.h>

class daWmMap_c : public dActor_c {
public:
    class anmInfo_c {
    public:
        char mAnmNames[16][10];
        int  mAnmNum;
        int  mCurrIndex;
    };

    uint getRouteAnimType(const char *name); // 1 - Mask, 2 - CHR, 4 - CLR, 8 - SRT

    static bool chkProcCourseUnlock();

    u8 pad[123];
    dWmMapModel_c mMapModels[4];
    anmInfo_c mRouteAnms;

    static daWmMap_c *m_instance;
};
