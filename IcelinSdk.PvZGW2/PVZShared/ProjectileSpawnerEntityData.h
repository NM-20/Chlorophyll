#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864C78
   RuntimeId:        2244
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8A
   VfTable:          0000000142351EE0
   Address (Base):   00000001430DA850
*/
#pragma pack(push, 16)
class ProjectileSpawnerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpawnRate; /* 0x0060 */
  FB_FLOAT32 SpawnSpeed; /* 0x0064 */
  FB_UINT32 ProjectileLimit; /* 0x0068 */
  FB_FLOAT32 MaxRandomAngle; /* 0x006C */
  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x0070 */
  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlockAsset; /* 0x0078 */
  FB_BOOLEAN SpawnOnInit; /* 0x0080 */
  FB_BOOLEAN SpawnOnTimer; /* 0x0081 */
  char pad_0082[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ProjectileSpawnerEntityData) == 144);

}
