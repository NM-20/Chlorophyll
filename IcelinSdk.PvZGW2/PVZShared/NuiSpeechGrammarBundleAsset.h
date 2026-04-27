#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861D28
   RuntimeId:        1FE5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BE
   VfTable:          0000000142344128
   Address (Base):   0000000143109390
*/
#pragma pack(push, 8)
class NuiSpeechGrammarBundleAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class NuiSpeechConfidencePolicySetup) ConfidencePolicy; /* 0x0018 */
  FB_REFARRAY(class NuiSpeechGrammarAsset) Grammars; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechGrammarBundleAsset) == 40);

}
