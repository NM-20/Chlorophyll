#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/LookConstraintsData.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseType.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseCollisionType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428515D0
   RuntimeId:        1482
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088E
   VfTable:          000000014227F498
   Address (Base):   000000014310F1B0
*/
#pragma pack(push, 16)
class CharacterPoseData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec2) ThrottleModifierCurve; /* 0x0010 */
  FB_FLOAT32 StepHeight; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 EyePosition; /* 0x0020 */
  Vec3 CollisionBoxMinExpand; /* 0x0030 */
  Vec3 CollisionBoxMaxExpand; /* 0x0040 */
  Vec3 RaycastOffset; /* 0x0050 */
  FB_FLOAT32 Height; /* 0x0060 */
  char pad_0064[0x0004];
  FB_STDARRAY(struct PoseTransitionTime) TransitionTimes; /* 0x0068 */
  LookConstraintsData LookConstraints; /* 0x0070 */
  CharacterPoseType PoseType; /* 0x0080 */
  FB_FLOAT32 PhysicalRadiusOverride; /* 0x0084 */
  CharacterPoseCollisionType CollisionType; /* 0x0088 */
  FB_FLOAT32 RaycastRadiusPadding; /* 0x008C */
  FB_FLOAT32 RaycastHeightPadding; /* 0x0090 */
  FB_FLOAT32 NonCapsuleSlideContactDistanceThreshold; /* 0x0094 */
  FB_BOOLEAN IsJumpAllowed; /* 0x0098 */
  char pad_0099[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(CharacterPoseData) == 160);

}
