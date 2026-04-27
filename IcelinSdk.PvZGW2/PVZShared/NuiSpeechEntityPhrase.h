#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScreenActionInputEventType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861F28
   RuntimeId:        2005
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E8A
   VfTable:          00000001423440C8
   Address (Base):   0000000143108FD0
*/
#pragma pack(push, 8)
class NuiSpeechEntityPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ScreenActionInputEventType EventType; /* 0x0040 */
  FB_INT32 Parameter; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechEntityPhrase) == 72);

}
