#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverCompareExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838360
   RuntimeId:        05A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1185
   VfTable:          00000001421F98C0
   Address (Base):   0000000143116D10
*/
#pragma pack(push, 8)
class VoiceOverCompareNodeConfigData : public VoiceOverNodeConfigData
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

static_assert(sizeof(VoiceOverCompareNodeConfigData) == 32);

}
