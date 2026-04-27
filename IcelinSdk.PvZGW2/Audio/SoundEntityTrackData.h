#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/GuideTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837AB0
   RuntimeId:        0520
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD5
   VfTable:          00000001421F9E00
   Address (Base):   00000001430F2D00
*/
#pragma pack(push, 8)
class SoundEntityTrackData : public GuideTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0030 */
  FB_REFARRAY(class SoundEntityTrackTransformLayerData) TransformTracks; /* 0x0038 */
  FB_REFARRAY(class SoundEntityTrackLayerData) SoundTracks; /* 0x0040 */
  FB_UINT32 GuideTrackSourceHash; /* 0x0048 */
  FB_BOOLEAN ForceStopWithTimeline; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackData) == 80);

}
