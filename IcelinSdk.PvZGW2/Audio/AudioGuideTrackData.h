#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/GuideTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837970
   RuntimeId:        050C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD4
   VfTable:          00000001421FA060
   Address (Base):   00000001430F2DC0
*/
#pragma pack(push, 8)
class AudioGuideTrackData : public GuideTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0030 */
  FB_CSTRING SoundPositionName; /* 0x0038 */
  FB_REFARRAY(class AudioGuideKeyframe) Keyframes; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(AudioGuideTrackData) == 72);

}
