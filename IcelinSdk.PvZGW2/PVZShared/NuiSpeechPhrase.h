#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhraseType.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhraseHintMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861E88
   RuntimeId:        1FFB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E83
   VfTable:          0000000142344098
   Address (Base):   00000001430BF8F0
*/
#pragma pack(push, 8)
class NuiSpeechPhrase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Tag; /* 0x0010 */
  FB_INT32 NumericId; /* 0x0018 */
  NuiSpeechPhraseType PhraseType; /* 0x001C */
  FB_CSTRING SuccessMessage; /* 0x0020 */
  FB_CSTRING Description; /* 0x0028 */
  NuiSpeechPhraseHintMode DescriptionMode; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class NuiSpeechConfidencePolicySetup) ConfidencePolicy; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechPhrase) == 64);

}
