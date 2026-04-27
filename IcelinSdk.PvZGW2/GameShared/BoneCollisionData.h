#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/PitchModifier.h>
#include <IcelinSdk.PvZGW2/GameShared/HitReactionType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E2C8
   RuntimeId:        11D7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8F88
   Default Value:    000000014284E2E0
*/
#pragma pack(push, 16)
struct BoneCollisionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 DebugDrawColor; /* 0x0000 */
  Vec3 CapsuleOffset; /* 0x0010 */
  PitchModifier MaxPitch; /* 0x0020 */
  PitchModifier MinPitch; /* 0x0040 */
  FB_CSTRING BoneName; /* 0x0060 */
  HitReactionType AnimationHitReactionType; /* 0x0068 */
  MaterialDecl MaterialPair; /* 0x006C */
  FB_INT32 BoneAxis; /* 0x0070 */
  FB_FLOAT32 CapsuleLength; /* 0x0074 */
  FB_FLOAT32 CapsuleRadius; /* 0x0078 */
  char pad_007C[0x0004];
  FB_HANDLE(class AimAssistCollisionBoneData) AimAssistTarget; /* 0x0080 */
  FB_BOOLEAN ValidInHiLod; /* 0x0088 */
  FB_BOOLEAN ValidInLowLod; /* 0x0089 */
  FB_BOOLEAN DeactivateIfBehindWall; /* 0x008A */
  FB_BOOLEAN UsePhysicsRotation; /* 0x008B */
  FB_BOOLEAN UseFirstEntryAsParent; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BoneCollisionData) == 144);

}
