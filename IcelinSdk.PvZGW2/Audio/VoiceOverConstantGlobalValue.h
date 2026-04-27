#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConstantValue.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838420
   RuntimeId:        05B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083B
   VfTable:          00000001421F9860
   Address (Base):   00000001430FF610
*/
#pragma pack(push, 8)
class VoiceOverConstantGlobalValue : public VoiceOverConstantValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverGlobalConstantValue) Source; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantGlobalValue) == 24);

}
