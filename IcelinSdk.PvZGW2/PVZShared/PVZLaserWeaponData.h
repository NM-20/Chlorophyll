#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869668
   RuntimeId:        24B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F07
   VfTable:          0000000142355B98
   Address (Base):   00000001430D9D70
*/
#pragma pack(push, 16)
class PVZLaserWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) BeamEffect; /* 0x0018 */
  Vec3 BeamOffset; /* 0x0020 */
  FB_HANDLE(class EffectBlueprint) BeamImpactEffect; /* 0x0030 */
  FB_FLOAT32 LaserTargetInterpolationTime; /* 0x0038 */
  GameplayBones ClientVisualProjectileSpawnBone; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZLaserWeaponData) == 64);

}
