#include <game.h>
#include <dScWMap_c.h>
#include "world_maps/data/resource_lists.h"

struct ResTableEntry {
    char **resNames;
    int resNum;
};

static ResTableEntry WorldResTbl[] = {
    {sc_w1_MapRes, ARRAY_LEN(sc_w1_MapRes)},
    {sc_w2_MapRes, ARRAY_LEN(sc_w2_MapRes)},
    {sc_w3_MapRes, ARRAY_LEN(sc_w3_MapRes)},
    {sc_w4_MapRes, ARRAY_LEN(sc_w4_MapRes)},
    {sc_w5_MapRes, ARRAY_LEN(sc_w5_MapRes)},
    {sc_w6_MapRes, ARRAY_LEN(sc_w6_MapRes)},
    {sc_w7_MapRes, ARRAY_LEN(sc_w7_MapRes)},
    {sc_w8_MapRes, ARRAY_LEN(sc_w8_MapRes)},
    {sc_w9_MapRes, ARRAY_LEN(sc_w9_MapRes)},
    NULL,
};

static ResTableEntry WorldObjResTbl[] = {
    {sc_w1_ObjRes, ARRAY_LEN(sc_w1_ObjRes)},
    {sc_w2_ObjRes, ARRAY_LEN(sc_w2_ObjRes)},
    {sc_w3_ObjRes, ARRAY_LEN(sc_w3_ObjRes)},
    {sc_w4_ObjRes, ARRAY_LEN(sc_w4_ObjRes)},
    {sc_w5_ObjRes, ARRAY_LEN(sc_w5_ObjRes)},
    {sc_w6_ObjRes, ARRAY_LEN(sc_w6_ObjRes)},
    {sc_w7_ObjRes, ARRAY_LEN(sc_w7_ObjRes)},
    {sc_w8_ObjRes, ARRAY_LEN(sc_w8_ObjRes)},
    {sc_w9_ObjRes, ARRAY_LEN(sc_w9_ObjRes)},
    NULL,
};

bool WORLD_MAP_INIT_SetRes() {
    // Map model
    dScWMap_c::setWorldMapArcName(dScWMap_c::m_instance->settings & 0xF, dScWMap_c::mWmArcName);
    DVD_LoadFile(GetDVDClass(), "WorldMap", dScWMap_c::mWmArcName, 0x0);

    // Global resources
    for (int i = 0; i < ARRAY_LEN(sc_wmGlobalRes); i++) {
        DVD_LoadFile(GetDVDClass(), "WorldMap", sc_wmGlobalRes[i], 0x0);
    }

    // Global object res
    for (int i = 0; i < ARRAY_LEN(sc_wmGlobalObjRes); i++) {
        DVD_LoadFile(GetDVDClass(), "Object", sc_wmGlobalObjRes[i], 0x0);
    }

    // Resources for this world
    char **resList = WorldResTbl[dScWMap_c::m_WorldNo].resNames;
    int resNum = WorldResTbl[dScWMap_c::m_WorldNo].resNum;
    if (resList[0] != 0x0) {
        DVD_LoadFiles(GetDVDClass(), "WorldMap", resList, resNum, 0x0);
    }

    // Object res for this world
    resList = WorldObjResTbl[dScWMap_c::m_WorldNo].resNames;
    resNum = WorldObjResTbl[dScWMap_c::m_WorldNo].resNum;
    if (resList[0] != 0x0) {
        DVD_LoadFiles(GetDVDClass(), "Object", resList, resNum, 0x0);
    }

    // World Select islands
    for (int i = 0; i < 9; i++) {
        char wsBuf[6];
        snprintf(wsBuf, 6, "WS_W%X", i+1);
        DVD_LoadFile(GetDVDClass(), "WorldMap", wsBuf, 0x0);
    }

    // World Select animations
    DVD_LoadFile(GetDVDClass(), "WorldMap", "rcha", 0x0);

    // Stock Item animations
    for (int i = 0; i < ARRAY_LEN(sc_wmStockAnmRes); i++) {
        DVD_LoadFile(GetDVDClass(), "WorldMap", sc_wmStockAnmRes[i], 0x0);
    }

    return true;
}

void DeleteWorldMapRes() {
    // Map Model
    DVD_FreeFile(GetDVDClass2(), dScWMap_c::mWmArcName);

    // Global resources
    for (int i = 0; i < ARRAY_LEN(sc_wmGlobalRes); i++) {
        DVD_FreeFile(GetDVDClass2(), sc_wmGlobalRes[i]);
    }

    // Global object res
    for (int i = 0; i < ARRAY_LEN(sc_wmGlobalObjRes); i++) {
        DVD_FreeFile(GetDVDClass2(), sc_wmGlobalObjRes[i]);
    }

    // Resources for this world
    char **resList = WorldResTbl[dScWMap_c::m_WorldNo].resNames;
    int resNum = WorldResTbl[dScWMap_c::m_WorldNo].resNum;
    for (int i = 0; i < resNum; i++) {
        if (resList[i] != 0x0) {
            DVD_FreeFile(GetDVDClass2(), resList[i]);
        }
    }

    // Object res for this world
    resList = WorldObjResTbl[dScWMap_c::m_WorldNo].resNames;
    resNum = WorldObjResTbl[dScWMap_c::m_WorldNo].resNum;
    for (int i = 0; i < resNum; i++) {
        if (resList[i] != 0x0) {
            DVD_FreeFile(GetDVDClass2(), resList[i]);
        }
    }

    // World Select islands
    for (int i = 0; i < 9; i++) {
        char wsBuf[6];
        snprintf(wsBuf, 6, "WS_W%X", i+1);
        DVD_FreeFile(GetDVDClass2(), wsBuf);
    }

    // World Select animations
    DVD_FreeFile(GetDVDClass2(), "rcha");

    // Stock Item animations
    for (int i = 0; i < ARRAY_LEN(sc_wmStockAnmRes); i++) {
        DVD_FreeFile(GetDVDClass2(), sc_wmStockAnmRes[i]);
    }
}
