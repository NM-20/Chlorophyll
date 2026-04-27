#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphParameterConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428360C8
   RuntimeId:        038B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FF
   VfTable:          00000001421F1518
   Address (Base):   00000001430FFB50
*/
#pragma pack(push, 8)
class AudioGraphValueParameterConfigData : public AudioGraphParameterConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphValueParameterConfigData) == 32);

}
