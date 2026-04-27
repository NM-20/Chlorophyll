#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836490
   RuntimeId:        03C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0890
   VfTable:          00000001421F4C10
   Address (Base):   0000000143118DB0
*/
#pragma pack(push, 8)
class MixerGraphData : public AudioGraphData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AudioGraphParameter) Inputs; /* 0x0038 */
  FB_STDARRAY(struct MixerInputInfo) MixerInputInfos; /* 0x0040 */
  FB_REFARRAY(class AudioGraphParameter) Outputs; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MixerGraphData) == 80);

}
