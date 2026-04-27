#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PoseTransitionBase.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F410
   RuntimeId:        12BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F8
   VfTable:          00000001422766F8
   Address (Base):   0000000143110AD0
*/
#pragma pack(push, 8)
class AnimatedPoseTransition : public PoseTransitionBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef TransitionAnimation; /* 0x0018 */
  FB_FLOAT32 AnimationBlendInTime; /* 0x002C */
  FB_FLOAT32 AnimationBlendOutTime; /* 0x0030 */
  FB_FLOAT32 TransitionAnimationDuration; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AnimatedPoseTransition) == 56);

}
