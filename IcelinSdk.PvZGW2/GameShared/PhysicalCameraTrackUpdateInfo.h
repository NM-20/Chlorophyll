#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F350
   RuntimeId:        12AF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8D08
   Default Value:    0000000142BA48A0
*/
#pragma pack(push, 16)
struct PhysicalCameraTrackUpdateInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0000 */
  FB_FLOAT32 FieldOfView; /* 0x0040 */
  FB_FLOAT32 FocalLength; /* 0x0044 */
  FB_FLOAT32 FocusDistance; /* 0x0048 */
  FB_FLOAT32 ExposureCompensation; /* 0x004C */
  FB_FLOAT32 Aperture; /* 0x0050 */
  FB_FLOAT32 ShutterSpeed; /* 0x0054 */
  FB_FLOAT32 EV; /* 0x0058 */
  FB_FLOAT32 ISO; /* 0x005C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PhysicalCameraTrackUpdateInfo) == 96);

}
