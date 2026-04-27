#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PoseTransitionBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F430
   RuntimeId:        12BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F9
   VfTable:          0000000142276728
   Address (Base):   0000000143110A70
*/
#pragma pack(push, 8)
class BlendedPoseTransition : public PoseTransitionBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BlendTime; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BlendedPoseTransition) == 32);

}
