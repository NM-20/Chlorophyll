#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverManuscriptAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838B28
   RuntimeId:        0620
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F0
   VfTable:          00000001421F9560
   Address (Base):   0000000143116350
*/
#pragma pack(push, 8)
class FinalDraftManuscriptAsset : public VoiceOverManuscriptAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SpreadsheetFileName; /* 0x0090 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(FinalDraftManuscriptAsset) == 152);

}
