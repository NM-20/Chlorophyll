#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraTrackBaseData.h>
#include <IcelinSdk.PvZGW2/GameShared/ExposureMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F370
   RuntimeId:        12B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA7
   VfTable:          00000001422767D8
   Address (Base):   00000001430D5F50
*/
#pragma pack(push, 8)
class PhysicalCameraTrackData : public CameraTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CameraLensPreset) PhysicalCamera; /* 0x0028 */
  ExposureMode ExposureMode; /* 0x0030 */
  char pad_0034[0x0004];
  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PhysicalCameraTrackData) == 64);

}
