#pragma once
#include <stage.h>
#include <dWmLib.h>

// "Last Course" table, which is used to control various game aspects such as:
// - Displaying the first save star (if W8 is cleared)
// - Hiding the World 5 vines (if cleared)
// - Unlocking the world in the multiplayer modes
int sc_LastCourse[8] = {
    STAGE_CASTLE1,  // W1
    STAGE_CASTLE1,  // W2
    STAGE_CASTLE1,  // W3
    STAGE_DOOMSHIP, // W4
    STAGE_CASTLE1,  // W5
    STAGE_DOOMSHIP, // W6
    STAGE_CASTLE1,  // W7
    STAGE_CASTLE1,  // W8
};
