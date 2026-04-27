#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D260
   RuntimeId:        10EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD1
   VfTable:          0000000142274418
   Address (Base):   00000001430D08C0
*/
#pragma pack(push, 8)
class ANTControlTrackData : public LinkTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ANTLayerData) LayerTracks; /* 0x0038 */
  FB_STDARRAY(FB_INT32) SkipToEndBones; /* 0x0040 */
  FB_STDARRAY(struct LinearTransform) SkipToEndTransforms; /* 0x0048 */
  FB_BOOLEAN HideWhenNoClip; /* 0x0050 */
  FB_BOOLEAN ForceDisableAnimationLOD; /* 0x0051 */
  FB_BOOLEAN AllowPreviousAnimationsToCarryForward; /* 0x0052 */
  char pad_0053[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ANTControlTrackData) == 88);

}
