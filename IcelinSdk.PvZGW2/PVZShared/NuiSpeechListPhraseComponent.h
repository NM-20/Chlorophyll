#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhraseComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862008
   RuntimeId:        2013
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0879
   VfTable:          0000000142343F58
   Address (Base):   0000000143108DF0
*/
#pragma pack(push, 8)
class NuiSpeechListPhraseComponent : public NuiSpeechPhraseComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NuiSpeechListElement) List; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechListPhraseComponent) == 32);

}
