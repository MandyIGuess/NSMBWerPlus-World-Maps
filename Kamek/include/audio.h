#pragma once
#include <common.h>

// Headers for dAudio and the Snd... stuff

namespace dAudio {
    enum SndScene_e {
        DUMMY = 0,          // Used to init audio, seemingly cannot play any sound?
        SCENE_BOOT,         // Set during BOOT scene's sPhase
        SCENE_WORLD_9_DEMO, // Plays no track
        SCENE_TITLE,
        SCENE_04,
        SCENE_MENU,
        SCENE_MULTI_COURSE_SELECT,
        SCENE_07,
        SCENE_MAP_W1,
        SCENE_MAP_W2,
        SCENE_MAP_W3,
        SCENE_MAP_W4,
        SCENE_MAP_W5,
        SCENE_MAP_W6,
        SCENE_MAP_W7,
        SCENE_MAP_W8,
        SCENE_MAP_W9,
        SCENE_STAGE,        // Actual sound track is handled separately
        SCENE_GAMEOVER,     // Plays no sound, handled by fanfare
        SCENE_MULTI_RESULT,
        SCENE_MULTI_FAIL,   // Plays no sound, handled by fanfare
        SCENE_DEMO_OP,
        SCENE_DEMO_ED,
        SCENE_DEMO_EX,      // Plays no sound
        SCENE_STAFF_CREDIT, // Unused
        SCENE_19,
        SCENE_1A,
        SCENE_1B,
        NONE
    };
};
