#include <audio.h>

// See enum in /include/audio.h for possible options
const int c_worldScene[10][4] = {
    {dAudio::SCENE_MAP_W1, dAudio::SCENE_MAP_W1, dAudio::SCENE_MAP_W1, dAudio::SCENE_MAP_W1},
    {dAudio::SCENE_MAP_W2, dAudio::SCENE_MAP_W2, dAudio::SCENE_MAP_W2, dAudio::SCENE_MAP_W2},
    {dAudio::SCENE_MAP_W3, dAudio::SCENE_MAP_W3, dAudio::SCENE_MAP_W3, dAudio::SCENE_MAP_W3},
    {dAudio::SCENE_MAP_W4, dAudio::SCENE_MAP_W4, dAudio::SCENE_MAP_W4, dAudio::SCENE_MAP_W4},
    {dAudio::SCENE_MAP_W5, dAudio::SCENE_MAP_W5, dAudio::SCENE_MAP_W5, dAudio::SCENE_MAP_W5},
    {dAudio::SCENE_MAP_W6, dAudio::SCENE_MAP_W6, dAudio::SCENE_MAP_W6, dAudio::SCENE_MAP_W6},
    {dAudio::SCENE_MAP_W7, dAudio::SCENE_MAP_W7, dAudio::SCENE_MAP_W7, dAudio::SCENE_MAP_W7},
    {dAudio::SCENE_MAP_W8, dAudio::SCENE_MAP_W8, dAudio::SCENE_MAP_W8, dAudio::SCENE_MAP_W8},
    {dAudio::SCENE_MAP_W9, dAudio::SCENE_MAP_W9, dAudio::SCENE_MAP_W9, dAudio::SCENE_MAP_W9},
    {dAudio::NONE,         dAudio::NONE,         dAudio::NONE,         dAudio::NONE}
};

// Returns a new 'sound scene' ID for the audio system
int cvtWorldScene(u16 null, ulong param) {
    int worldNo = param & 0xF;
    int subAreaNo = (param >> 4) & 0xF;
    return c_worldScene[worldNo][subAreaNo];
}
