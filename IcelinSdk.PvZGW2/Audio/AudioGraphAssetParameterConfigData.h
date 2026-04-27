#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphParameterConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428360A8
   RuntimeId:        0389
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FE
   VfTable:          00000001421F1528
   Address (Base):   00000001430FFBB0
*/
#pragma pack(push, 8)
class AudioGraphAssetParameterConfigData : public AudioGraphParameterConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Asset) Asset; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphAssetParameterConfigData) == 32);

}
