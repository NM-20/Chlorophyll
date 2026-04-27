#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/PVZShared/ArtilleryDispersionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B4D0
   RuntimeId:        2626
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F03
   VfTable:          000000014235AC18
   Address (Base):   0000000143106870
*/
#pragma pack(push, 8)
class ArtilleryStrikeWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxStrikeDistance; /* 0x0018 */
  FB_FLOAT32 StrikeRadius; /* 0x001C */
  FB_FLOAT32 SpawnHeight; /* 0x0020 */
  FB_FLOAT32 MaxRandomSpawnHeight; /* 0x0024 */
  FB_FLOAT32 SpawnHeightMultiplier; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class TargetCameraData) Camera; /* 0x0030 */
  FB_FLOAT32 AimingCameraHeight; /* 0x0038 */
  FB_FLOAT32 StrikeCameraHeight; /* 0x003C */
  FB_FLOAT32 AimingCameraOffset; /* 0x0040 */
  FB_FLOAT32 StrikeCameraOffset; /* 0x0044 */
  FB_FLOAT32 AimingCameraFov; /* 0x0048 */
  FB_FLOAT32 DelayBeforeAimingCamera; /* 0x004C */
  FB_FLOAT32 StrikeCameraFov; /* 0x0050 */
  FB_FLOAT32 FireCameraTime; /* 0x0054 */
  FB_FLOAT32 StrikeCameraTime; /* 0x0058 */
  FB_FLOAT32 ValidMinDistance; /* 0x005C */
  FB_FLOAT32 ValidMaxDistance; /* 0x0060 */
  FB_FLOAT32 ValidMaxAngle; /* 0x0064 */
  ArtilleryDispersionData ArtilleryDispersion; /* 0x0068 */
  FB_BOOLEAN IncreaseSpawnHeightWithDistance; /* 0x0084 */
  FB_BOOLEAN EnableProjectileTrails; /* 0x0085 */
  FB_BOOLEAN EnableCameraRotation; /* 0x0086 */
  char pad_0087[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(ArtilleryStrikeWeaponData) == 136);

}
