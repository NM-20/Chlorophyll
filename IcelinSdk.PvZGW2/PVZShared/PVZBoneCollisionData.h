#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>
#include <IcelinSdk.PvZGW2/PVZShared/BoneCollisionAxis.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862978
   RuntimeId:        20A2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4FE8
   Default Value:    0000000142862990
*/
#pragma pack(push, 16)
struct PVZBoneCollisionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 DebugDrawColor; /* 0x0000 */
  Vec3 CapsuleOffset; /* 0x0010 */
  Vec3 CapsuleRotation; /* 0x0020 */
  GameplayBones Bone; /* 0x0030 */
  BoneCollisionAxis BoneAxis; /* 0x0034 */
  FB_FLOAT32 CapsuleLength; /* 0x0038 */
  FB_FLOAT32 CapsuleRadius; /* 0x003C */
  MaterialDecl MaterialPair; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZBoneCollisionData) == 80);

}
