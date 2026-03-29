#include <game.h>

extern void *dWmSeManager_c__m_pInstance;
extern void dWmSeManager_c__playSoundAtPos(void *self, int sndID, Vec *pos, uint);

// The jump sound is audibly different when the tower doesn't also play its jump sound
// So this reimplements the sound but without the animation/effect
extern "C" void PlayTorideJumpSndNoAnm() {
    dActor_c *pToride = (dActor_c*)fBase_c::searchByProfileId(ProfileId::WM_TORIDE, 0x0);
    if (pToride != 0x0) {
        dWmSeManager_c__playSoundAtPos(dWmSeManager_c__m_pInstance, 0x49, &pToride->pos, 0);
    }
}