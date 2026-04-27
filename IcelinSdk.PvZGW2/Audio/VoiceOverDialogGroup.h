#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838860
   RuntimeId:        05F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1010
   VfTable:          00000001421F9680
   Address (Base):   0000000143116710
*/
#pragma pack(push, 8)
class VoiceOverDialogGroup : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0010 */
  FB_UINT8 TrackCount; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogGroup) == 32);

}
