#pragma once
#include <game.h>

class dWmMapModel_c {
public:
    bool isStop_ChrAnm(const char *name);
    bool isStop_ClrAnm(const char *name);

    u8 pad[0xBF8];
};
