#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862028
   RuntimeId:        2015
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E88
   VfTable:          0000000142343F68
   Address (Base):   00000001430F8950
*/
#pragma pack(push, 8)
class NuiSpeechComplexPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NuiSpeechPhraseComponent) PhraseComponents; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechComplexPhrase) == 72);

}
