#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DA38
   RuntimeId:        115D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC7
   VfTable:          0000000142273B30
   Address (Base):   0000000143111A90
*/
#pragma pack(push, 16)
class AnimatedCameraData : public CameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SkeletonAsset) Skeleton; /* 0x0060 */
  FB_CSTRING CameraBone; /* 0x0068 */
  FB_CSTRING FovBone; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(AnimatedCameraData) == 128);

}
