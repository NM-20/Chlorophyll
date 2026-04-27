#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838990
   RuntimeId:        0608
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E59
   VfTable:          00000001421F9618
   Address (Base):   00000001431165F0
*/
#pragma pack(push, 8)
class VoiceOverTriggerParameter : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection Source; /* 0x0010 */
  FB_HANDLE(class VoiceOverNamedValue) EventParameter; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverTriggerParameter) == 40);

}
