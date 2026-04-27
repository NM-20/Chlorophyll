#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861D08
   RuntimeId:        1FE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BC
   VfTable:          0000000142344118
   Address (Base):   00000001431093F0
*/
#pragma pack(push, 8)
class NuiSpeechGrammarAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NuiSpeechPhrase) Phrases; /* 0x0018 */
  FB_HANDLE(class NuiSpeechConfidencePolicySetup) ConfidencePolicy; /* 0x0020 */
  FB_HANDLE(class NuiSpeechGrammarBundleAsset) GrammarBundle; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechGrammarAsset) == 48);

}
