#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConstantValue.h>

namespace fb
{

/* TypeInfo (Array): 00000001428383E0
   RuntimeId:        05B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083D
   VfTable:          00000001421F9880
   Address (Base):   00000001430FF6D0
*/
#pragma pack(push, 8)
class VoiceOverConstantIntegerValue : public VoiceOverConstantValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Value; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantIntegerValue) == 24);

}
