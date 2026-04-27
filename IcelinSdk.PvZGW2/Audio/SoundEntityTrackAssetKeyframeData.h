#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428379F0
   RuntimeId:        0514
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1208
   VfTable:          00000001421FA000
   Address (Base):   0000000143117670
*/
#pragma pack(push, 8)
class SoundEntityTrackAssetKeyframeData : public SoundEntityTrackKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundWaveAsset) Asset; /* 0x0018 */
  FB_BOOLEAN TriggerDefaultStartEvent; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackAssetKeyframeData) == 40);

}
