.text
.align 4

#include <asm_setup.S>

.extern wmNodeCullTable
.extern getWmActorCullRadius__Fs
.extern wmCloudCullNames
.extern wmCloudCullRadius

.extern returnFromWmModelCull1 # 0x808E3188
.extern returnFromWmModelCull2 # 0x808E3260
.extern returnFromWmActorCull  # 0x800F2A4C
.extern returnFromWmCloudCull1 # 0x808CD9E8
.extern returnFromWmCloudCull2 # 0x808CDA80

.global newCullInfo
newCullInfo:
    lis     r29, wmNodeCullTable@h
    ori     r29, r29, wmNodeCullTable@l
	b       returnFromWmModelCull1

.global newCullInfo2
newCullInfo2:
    lis     r31, wmNodeCullTable@h
    ori     r31, r31, wmNodeCullTable@l
	b       returnFromWmModelCull2

.global CullAllWmActors
CullAllWmActors:
    lha r3, 0x8(r31) # Get profileID
    bl getWmActorCullRadius__Fs

    fmr f0, f1 # Our float is in f1, we need it in f0
    stfs f1, 0x134(r31) # Override mSphere radius
    b returnFromWmActorCull

.global LoadWmCloudCullNames
LoadWmCloudCullNames:
    lis     r30, wmCloudCullNames@h
    ori     r30, r30, wmCloudCullNames@l
    b       returnFromWmCloudCull1

.global LoadWmCloudCullRadius
LoadWmCloudCullRadius:
    lis     r29, wmCloudCullRadius@h
    ori     r29, r29, wmCloudCullRadius@l
    b       returnFromWmCloudCull2