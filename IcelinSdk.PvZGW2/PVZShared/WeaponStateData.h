#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/PVZShared/AnimatedFireEnum.h>
#include <IcelinSdk.PvZGW2/PVZShared/AnimatedAimingEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D738
   RuntimeId:        2812
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2D68
   Default Value:    000000014286D750
*/
#pragma pack(push, 8)
struct WeaponStateData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) ReferencedAssetHashes; /* 0x0000 */
  FB_HANDLE(class ObjectBlueprint) WeaponMesh3p; /* 0x0008 */
  FB_HANDLE(class SkinnedMeshAsset) Mesh3p; /* 0x0010 */
  AntRef Weapon; /* 0x0018 */
  AnimatedFireEnum AnimatedFireType; /* 0x002C */
  AnimatedAimingEnum AnimatedAimingType; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(struct LinearTransform) Mesh3pTransforms; /* 0x0038 */
  FB_BOOLEAN IsOneHanded; /* 0x0040 */
  FB_BOOLEAN PlayDeployAfterFire; /* 0x0041 */
  FB_BOOLEAN SkipDeployAnimation; /* 0x0042 */
  FB_BOOLEAN SkipFireAnimation; /* 0x0043 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(WeaponStateData) == 72);

}
