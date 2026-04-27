#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PhysicalCameraTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DCE0
   RuntimeId:        117F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA9
   VfTable:          0000000142273918
   Address (Base):   00000001430EC400
*/
#pragma pack(push, 8)
class CameraTrackData : public PhysicalCameraTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LayeredTransformTrackData) LayeredTransformTrack; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) FovTrack; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CameraTrackData) == 80);

}
