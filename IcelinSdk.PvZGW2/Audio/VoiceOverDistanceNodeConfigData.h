#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverCompareExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838500
   RuntimeId:        05C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117D
   VfTable:          00000001421F97F0
   Address (Base):   0000000143116B90
*/
#pragma pack(push, 8)
class VoiceOverDistanceNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverCompareExpressionType Operation; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDistanceNodeConfigData) == 32);

}
