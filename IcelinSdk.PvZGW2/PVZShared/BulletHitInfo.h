#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/AntHitReactionWeaponType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D920
   RuntimeId:        282A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2D48
   Default Value:    0000000142BFEE60
*/
#pragma pack(push, 16)
struct BulletHitInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Direction; /* 0x0000 */
  Vec3 SpawnPosition; /* 0x0010 */
  Vec3 HitPosition; /* 0x0020 */
  FB_FLOAT32 Damage; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class UnlockAssetBase) WeaponUnlockAsset; /* 0x0038 */
  AntHitReactionWeaponType WeaponType; /* 0x0040 */
  FB_INT32 BoneType; /* 0x0044 */
  FB_INT32 ShooterPlayerId; /* 0x0048 */
  FB_BOOLEAN ShooterIsAIPlayer; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(BulletHitInfo) == 80);

}
