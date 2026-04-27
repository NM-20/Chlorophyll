#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428386E0
   RuntimeId:        05E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117A
   VfTable:          00000001421F9720
   Address (Base):   00000001431168F0
*/
#pragma pack(push, 8)
class VoiceOverVariableNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverNamedValue) Source; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverVariableNodeConfigData) == 32);

}
