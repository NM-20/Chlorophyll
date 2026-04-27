#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZTargetCameraData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428597B8
   RuntimeId:        1B46
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCF
   VfTable:          00000001422DBFA8
   Address (Base):   00000001430FA330
*/
#pragma pack(push, 16)
class PVZManDownCameraData : public PVZTargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 adjustAngleDelta; /* 0x0120 */
  FB_FLOAT32 MaxZoomDistance; /* 0x0124 */
  FB_FLOAT32 MaxRotation; /* 0x0128 */
  FB_FLOAT32 ZoomSensitivity; /* 0x012C */
  FB_FLOAT32 ZoomStep; /* 0x0130 */
  FB_FLOAT32 YawSensitivity; /* 0x0134 */
  FB_FLOAT32 YawStep; /* 0x0138 */
  FB_FLOAT32 PitchSensitivity; /* 0x013C */
  FB_FLOAT32 PitchStep; /* 0x0140 */
  FB_BOOLEAN adjustWantedAngle; /* 0x0144 */
  char pad_0145[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(PVZManDownCameraData) == 336);

}
