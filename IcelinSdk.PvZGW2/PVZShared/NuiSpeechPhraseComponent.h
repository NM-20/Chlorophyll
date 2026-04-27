#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861FC8
   RuntimeId:        200F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0878
   VfTable:          0000000142343F88
   Address (Base):   00000001430F89B0
*/
#pragma pack(push, 8)
class NuiSpeechPhraseComponent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Tag; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechPhraseComponent) == 24);

}
