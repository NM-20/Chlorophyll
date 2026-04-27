#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428387C0
   RuntimeId:        05EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FF
   VfTable:          00000001421F96C8
   Address (Base):   0000000143116830
*/
#pragma pack(push, 8)
class VoiceOverDialogClipEvents : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 StartedNameHash; /* 0x0010 */
  FB_UINT32 FinishedNameHash; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogClipEvents) == 24);

}
