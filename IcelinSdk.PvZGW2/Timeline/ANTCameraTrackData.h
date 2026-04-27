#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854CC8
   RuntimeId:        17BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAE
   VfTable:          00000001422B55F8
   Address (Base):   00000001430DAC10
*/
#pragma pack(push, 8)
class ANTCameraTrackData : public EntityTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TransformBoneName; /* 0x0040 */
  FB_CSTRING FOVBoneName; /* 0x0048 */
  FB_CSTRING DOFBoneName; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ANTCameraTrackData) == 88);

}
