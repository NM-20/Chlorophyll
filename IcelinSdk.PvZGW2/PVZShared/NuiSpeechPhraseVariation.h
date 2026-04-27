#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861CC8
   RuntimeId:        1FDF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1100
   VfTable:          0000000142344148
   Address (Base):   00000001431094B0
*/
#pragma pack(push, 8)
class NuiSpeechPhraseVariation : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class NuiSpeechPhrase) Phrase; /* 0x0010 */
  FB_INT32 VariationIndex; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING Translation; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) Pronunciations; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechPhraseVariation) == 48);

}
