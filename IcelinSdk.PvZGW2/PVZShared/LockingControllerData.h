#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/LockingAndHomingData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ACF8
   RuntimeId:        25DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD7
   VfTable:          000000014235AE08
   Address (Base):   0000000143106AB0
*/
#pragma pack(push, 8)
class LockingControllerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ZoomLevelLockData) ZoomLevelLock; /* 0x0010 */
  FB_FLOAT32 LockTime; /* 0x0018 */
  FB_FLOAT32 MinimumLockTime; /* 0x001C */
  FB_FLOAT32 UnLockTime; /* 0x0020 */
  FB_FLOAT32 ReleaseTime; /* 0x0024 */
  FB_FLOAT32 ReleaseOnNewTargetTime; /* 0x0028 */
  FB_FLOAT32 SampleRate; /* 0x002C */
  FB_FLOAT32 HoldStillThreshold; /* 0x0030 */
  FB_FLOAT32 LockOnTargetInProximityRadius; /* 0x0034 */
  FB_FLOAT32 LockOnTargetWithinAngleValue; /* 0x0038 */
  FB_FLOAT32 LockOnTargetMaxDistance; /* 0x003C */
  LockingAndHomingData LockingWeaponData; /* 0x0040 */
  FB_BOOLEAN RequireAmmoToLock; /* 0x0048 */
  FB_BOOLEAN PositionOnly; /* 0x0049 */
  FB_BOOLEAN LockOnWorldSpacePos; /* 0x004A */
  FB_BOOLEAN LockOnTargetInProximity; /* 0x004B */
  FB_BOOLEAN LockOnTargetWithinAngle; /* 0x004C */
  FB_BOOLEAN LockInCombatAreaOnly; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(LockingControllerData) == 80);

}
