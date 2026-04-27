#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863938
   RuntimeId:        2131
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4AA8
   Default Value:    0000000142863950
*/
#pragma pack(push, 8)
struct SunDropProjectile
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x0000 */
  FB_FLOAT32 SpawnChance; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SunDropProjectile) == 16);

}
