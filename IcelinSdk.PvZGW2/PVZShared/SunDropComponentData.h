#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863968
   RuntimeId:        2133
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D65
   VfTable:          0000000142353750
   Address (Base):   00000001430E7780
*/
#pragma pack(push, 16)
class SunDropComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SunDropSpawnRate; /* 0x0070 */
  FB_FLOAT32 SunDropSpawnSpeed; /* 0x0074 */
  FB_STDARRAY(struct SunDropProjectile) Projectiles; /* 0x0078 */
  FB_INT32 SpawnProjectileAtIndex; /* 0x0080 */
  char pad_0084[0x0004];
  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlockAsset; /* 0x0088 */
  FB_INT32 HealingInterest; /* 0x0090 */
  FB_BOOLEAN IsHealingInterest; /* 0x0094 */
  FB_BOOLEAN SpawnSunDropOnInit; /* 0x0095 */
  FB_BOOLEAN SpawnSunDropOnTimer; /* 0x0096 */
  FB_BOOLEAN AllowDropAfterDeath; /* 0x0097 */
  FB_BOOLEAN SpawnRandomProjectile; /* 0x0098 */
  char pad_0099[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(SunDropComponentData) == 160);

}
