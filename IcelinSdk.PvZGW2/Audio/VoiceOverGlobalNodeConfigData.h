#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838540
   RuntimeId:        05C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1184
   VfTable:          00000001421F97D0
   Address (Base):   0000000143116B30
*/
#pragma pack(push, 8)
class VoiceOverGlobalNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverNamedValue) Field; /* 0x0018 */
  FB_HANDLE(class VoiceOverObject) Object; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverGlobalNodeConfigData) == 40);

}
