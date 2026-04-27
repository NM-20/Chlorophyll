#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceMessageEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861F68
   RuntimeId:        2009
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E8B
   VfTable:          00000001423440B8
   Address (Base):   0000000143108F10
*/
#pragma pack(push, 8)
class NuiSpeechInputActionPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceMessageEvent Event; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechInputActionPhrase) == 72);

}
