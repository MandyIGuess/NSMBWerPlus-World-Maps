#include <profileid.h>
#include <dScWMap_c.h>
#include "world_maps/data/boss_data.h"

// Internal boss order, DO NOT EDIT
enum BOSS_INDEX_e {
    BOSS_LARRY,
    BOSS_ROY,
    BOSS_WENDY,
    BOSS_IGGY,
    BOSS_LEMMY,
    BOSS_MORTON,
    BOSS_LUDWIG,
    BOSS_KAMEK,
};

int GetBossIndex(int worldNo) {
    return sc_bossIdx[worldNo];
}

int GetWorldBossProfID(int worldNo) {
    return sc_bossProfID[worldNo];
}

// `mapSndID` is relative to dWmSeManager_c's sound list
// Returns global sound ID
int cvtKoopalingSnd(void *seMng, int mapSndID) {
    int cvtSnd = SE_DUMMY;
    int bossIdx = sc_bossIdx[dScWMap_c::m_WorldNo];

    switch (mapSndID) {
        case 0x4E: // FALL_INTO_MAP
            cvtSnd = sc_KoopalingSnd[0][bossIdx];
            break;
        case 0x4F: // BRING_IT
            cvtSnd = sc_KoopalingSnd[1][bossIdx];
            break;
        case 0x50: // BEAT_YOU
            cvtSnd = sc_KoopalingSnd[2][bossIdx];
            break;
        case 0x51: // SHOVED
            cvtSnd = sc_KoopalingSnd[3][bossIdx];
            break;
        case 0x52: // CS_JUMP
            cvtSnd = sc_KoopalingSnd[4][bossIdx];
            break;
        case 0x53: // CS_JUMP_F
            cvtSnd = sc_KoopalingSnd[5][bossIdx];
            break;
    }

    return cvtSnd;
}
