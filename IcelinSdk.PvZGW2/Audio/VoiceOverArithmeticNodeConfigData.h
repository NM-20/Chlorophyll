#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverArithmeticExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838300
   RuntimeId:        05A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1179
   VfTable:          00000001421F98E0
   Address (Base):   0000000143116D70
*/
#pragma pack(push, 8)
class VoiceOverArithmeticNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverArithmeticExpressionType Operation; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverArithmeticNodeConfigData) == 32);

}
