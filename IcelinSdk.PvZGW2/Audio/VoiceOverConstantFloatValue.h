#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConstantValue.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838400
   RuntimeId:        05B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083C
   VfTable:          00000001421F9870
   Address (Base):   00000001430FF670
*/
#pragma pack(push, 8)
class VoiceOverConstantFloatValue : public VoiceOverConstantValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantFloatValue) == 24);

}
