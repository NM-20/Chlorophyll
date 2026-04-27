#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GhostedProjectileEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869628
   RuntimeId:        24AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1D
   VfTable:          0000000142355BA8
   Address (Base):   00000001430D00E0
*/
#pragma pack(push, 16)
class PVZCharacterProjectileEntityData : public GhostedProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterBlueprint) Soldier; /* 0x0150 */
  FB_HANDLE(class CharacterSpawnTemplateData) Template; /* 0x0158 */
  FB_INT32 SoldierCount; /* 0x0160 */
  FB_FLOAT32 Radius; /* 0x0164 */
  FB_BOOLEAN FollowShooter; /* 0x0168 */
  FB_BOOLEAN DestroyOnShooterKilled; /* 0x0169 */
  FB_BOOLEAN CanPickUp; /* 0x016A */
  FB_BOOLEAN ManagedByWaveSpawner; /* 0x016B */
  char pad_016C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterProjectileEntityData) == 368);

}
