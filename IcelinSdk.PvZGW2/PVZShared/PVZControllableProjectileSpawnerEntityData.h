#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864C98
   RuntimeId:        2246
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BEB
   VfTable:          0000000142351E70
   Address (Base):   00000001430D3D90
*/
#pragma pack(push, 16)
class PVZControllableProjectileSpawnerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Offset; /* 0x0020 */
  LinearTransform Source; /* 0x0030 */
  LinearTransform Target; /* 0x0070 */
  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x00B0 */
  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlockAsset; /* 0x00B8 */
  FB_FLOAT32 SpawnSpeed; /* 0x00C0 */
  FB_BOOLEAN RequirePlayer; /* 0x00C4 */
  FB_BOOLEAN AssertOnMissingPlayer; /* 0x00C5 */
  char pad_00C6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(PVZControllableProjectileSpawnerEntityData) == 208);

}
