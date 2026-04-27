#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PhysicalCameraTrackData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F770
   RuntimeId:        12ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA8
   VfTable:          0000000142276458
   Address (Base):   00000001430EBD40
*/
#pragma pack(push, 8)
class ANTAnimatableCameraTrackData : public PhysicalCameraTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LayeredTransformTrackData) LayeredTransformTrack; /* 0x0040 */
  FB_HANDLE(class ANTControlTrackData) AntControlTrack; /* 0x0048 */
  AntRef CameraActor; /* 0x0050 */
  char pad_0064[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(ANTAnimatableCameraTrackData) == 104);

}
