#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837480
   RuntimeId:        04C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFC
   VfTable:          00000001421FA270
   Address (Base):   0000000143117A30
*/
#pragma pack(push, 8)
class WaveSwitcherNodeConfigData : public AudioGraphNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundWaveAsset) Waves; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaveSwitcherNodeConfigData) == 32);

}
