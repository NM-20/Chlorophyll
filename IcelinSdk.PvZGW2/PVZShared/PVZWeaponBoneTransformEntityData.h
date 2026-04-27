#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 00000001428626D8
   RuntimeId:        2078
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A3C
   VfTable:          0000000142343AE8
   Address (Base):   00000001430E82C0
*/
#pragma pack(push, 8)
class PVZWeaponBoneTransformEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GameplayBones Bone; /* 0x0018 */
  FB_BOOLEAN AutoEnable; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZWeaponBoneTransformEntityData) == 32);

}
