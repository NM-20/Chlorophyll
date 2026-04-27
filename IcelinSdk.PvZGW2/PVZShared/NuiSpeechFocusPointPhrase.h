#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechFocusPointAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861F08
   RuntimeId:        2003
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E87
   VfTable:          00000001423440E8
   Address (Base):   0000000143109030
*/
#pragma pack(push, 8)
class NuiSpeechFocusPointPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  NuiSpeechFocusPointAction Action; /* 0x0040 */
  char pad_0044[0x0004];
  FB_CSTRING FocusPointName; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechFocusPointPhrase) == 80);

}
