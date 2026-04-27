#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCharacterWeaponData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869648
   RuntimeId:        24B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0B
   VfTable:          0000000142355BE0
   Address (Base):   00000001430D3910
*/
#pragma pack(push, 16)
class LaserPVZCharacterWeaponData : public PVZCharacterWeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BeamOffset; /* 0x01A0 */
  FB_FLOAT32 LaserTargetInterpolationTime; /* 0x01B0 */
  char pad_01B4[0x0004];
  FB_HANDLE(class EffectBlueprint) BeamImpactEffect; /* 0x01B8 */
  GameplayBones ClientVisualProjectileSpawnBone; /* 0x01C0 */
  char pad_01C4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */
#pragma pack(pop)

static_assert(sizeof(LaserPVZCharacterWeaponData) == 464);

}
