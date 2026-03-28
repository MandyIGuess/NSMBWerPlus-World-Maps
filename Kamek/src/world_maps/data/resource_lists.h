#include <common.h>

// World Map Resource Lists

// Global resources, these load in every world
// Loads from WorldMap folder on the disc
static char *sc_wmGlobalRes[] = {
    "RouteInfo",
    "CollectionCoinCourseSort",
    "cobCastle",
    "cobCourse",
    "cobKinokoRed",
    "cobKinoko1up",
    "cobKinokoStar",
    "cobStart",
    "cobAnchor",
    "cobToride",
    "cobGhost",
    "cobCannon",
    "cobKoopaShip",
    "character_SV",
    "cobSurrender",
    "cobKinopio",
    // Start of new entries
};

// Global objects, these load in every world
// Loads from Object folder on the disc
static char *sc_wmGlobalObjRes[] = {
    "teresa",
    "I_kinoko",
    "I_fireflower",
    "I_propeller",
    "I_iceflower",
    "I_penguin",
    "I_star",
    "I_hammer",
};

// Stock Item animations
// Loads from WorldMap folder on the disc
static char *sc_wmStockAnmRes[] = {
    "SI_kinoko",
    "SI_fireflower",
    "SI_propeller",
    "SI_iceflower",
    "SI_penguin",
    "SI_star",
    "SI_Hammer",
};

/////////////////////////////////////
//       PER-WORLD RESOURCES       //
/////////////////////////////////////
// 'MapRes' loads from WorldMap
// 'ObjRes' loads from Object

// WORLD 1
static char *sc_w1_MapRes[] = {
    "cobPeachCastle",
};
static char *sc_w1_ObjRes[] = {
    "larry",
    "kuribo",
};

// WORLD 2
static char *sc_w2_MapRes[] = {
    "cobSandpillar",
};
static char *sc_w2_ObjRes[] = {
    "roy",
    "togezo",
};

// WORLD 3
static char *sc_w3_MapRes[] = {
    "cobHatenaSwitch",
};
static char *sc_w3_ObjRes[] = {
    "lemmy",
    "bros",
};

// WORLD 4
static char *sc_w4_MapRes[] = {
    "CS_W4_Palm",
};
static char *sc_w4_ObjRes[] = {
    "wendy",
    "fugu",
    "koopaJr",
};

// WORLD 5
static char *sc_w5_MapRes[] = {
    NULL,
};
static char *sc_w5_ObjRes[] = {
    "iggy",
    "pakkun_walk",
    "hanachan_body",
    "hanachan_head",
};

// WORLD 6
static char *sc_w6_MapRes[] = {
    "cobKiller",
    "cobRotary",
    "cobDokanRoute",
};
static char *sc_w6_ObjRes[] = {
    "morton",
    "killer",
    "koopaJr",
    "pakkun",
};

// WORLD 7
static char *sc_w7_MapRes[] = {
    "cobTsuta",
};
static char *sc_w7_ObjRes[] = {
    "ludwig",
    "jugem",
};

// WORLD 8
static char *sc_w8_MapRes[] = {
    "cobKoopaCastle",
    "cobfirepillar",
};
static char *sc_w8_ObjRes[] = {
    "kameck",
    "peach",
    "bubble",
};

// WORLD 9
static char *sc_w9_MapRes[] = {
    "cobBoard",
};
static char *sc_w9_ObjRes[] = {
    NULL,
};
