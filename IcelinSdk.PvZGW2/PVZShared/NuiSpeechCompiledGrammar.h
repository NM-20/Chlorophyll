#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/Dialect.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861CE8
   RuntimeId:        1FE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06EC
   VfTable:          0000000142344138
   Address (Base):   0000000143109450
*/
#pragma pack(push, 8)
class NuiSpeechCompiledGrammar : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class NuiSpeechGrammarBundleAsset) GrammarBundle; /* 0x0018 */
  Dialect Dialect; /* 0x0020 */
  char pad_0024[0x0004];
  FB_REFARRAY(class NuiSpeechPhraseVariation) PhraseVariations; /* 0x0028 */
  FB_STDARRAY(FB_UINT8) Data; /* 0x0030 */
  FB_UINT32 Size; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechCompiledGrammar) == 64);

}
