#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AE38
   RuntimeId:        25F0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8C40
   Default Value:    0000000142BB4FF0
*/
#pragma pack(push, 16)
struct ShotConfigData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 InitialPosition; /* 0x0000 */
  Vec3 InitialPositionNoBone; /* 0x0010 */
  Vec3 InitialPositionNoBone_Second; /* 0x0020 */
  Vec3 InitialPositionNoBone_Third; /* 0x0030 */
  Vec3 InitialSpeed; /* 0x0040 */
  FB_FLOAT32 RaycastDistance; /* 0x0050 */
  FB_FLOAT32 InheritWeaponSpeedAmount; /* 0x0054 */
  FB_HANDLE(class ExplosionEntityData) MuzzleExplosion; /* 0x0058 */
  FB_FLOAT32 SpawnDelay; /* 0x0060 */
  FB_UINT32 NumberOfBulletsPerShell; /* 0x0064 */
  FB_UINT32 NumberOfBulletsPerShot; /* 0x0068 */
  FB_UINT32 NumberOfBulletsPerBurst; /* 0x006C */
  FB_UINT32 UnloadBulletsPerShot; /* 0x0070 */
  char pad_0074[0x0004];
  FB_STDARRAY(struct RemainingBulletModifierData) RemainingBulletModifiers; /* 0x0078 */
  FB_FLOAT32 ForceSpawnToBoneAutoAimAngle; /* 0x0080 */
  FB_FLOAT32 ForceSpawnToBoneAutoAimDistance; /* 0x0084 */
  FB_FLOAT32 WeaponHitDistanceMinimum; /* 0x0088 */
  FB_FLOAT32 WeaponDotTestMax; /* 0x008C */
  FB_FLOAT32 WeaponRaycastVerticalOffset; /* 0x0090 */
  FB_FLOAT32 WeaponWallTestDist; /* 0x0094 */
  FB_FLOAT32 CloseCharacterTestDist; /* 0x0098 */
  FB_BOOLEAN AllowAIClientShootBoneLookup; /* 0x009C */
  FB_BOOLEAN AllowAIServerShootBoneLookup; /* 0x009D */
  FB_BOOLEAN ForceSpawnToBone; /* 0x009E */
  FB_BOOLEAN ForceSpawnToCamera; /* 0x009F */
  FB_BOOLEAN DualShootspace; /* 0x00A0 */
  FB_BOOLEAN TripleShootspace; /* 0x00A1 */
  char pad_00A2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(ShotConfigData) == 176);

}
