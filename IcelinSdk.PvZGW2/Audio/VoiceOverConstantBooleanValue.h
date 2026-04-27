#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConstantValue.h>

namespace fb
{

/* TypeInfo (Array): 00000001428383C0
   RuntimeId:        05AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0839
   VfTable:          00000001421F9890
   Address (Base):   00000001430FF730
*/
#pragma pack(push, 8)
class VoiceOverConstantBooleanValue : public VoiceOverConstantValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Value; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantBooleanValue) == 24);

}
