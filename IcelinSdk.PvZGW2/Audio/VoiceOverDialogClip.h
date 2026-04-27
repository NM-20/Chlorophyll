#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428387E0
   RuntimeId:        05F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F19
   VfTable:          00000001421F96B8
   Address (Base):   00000001431167D0
*/
#pragma pack(push, 8)
class VoiceOverDialogClip : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinOffset; /* 0x0010 */
  FB_FLOAT32 MaxOffset; /* 0x0014 */
  FB_STDARRAY(struct VoiceOverDialogTake) Takes; /* 0x0018 */
  FB_REFARRAY(class VoiceOverDialogClip) OffsetReferences; /* 0x0020 */
  FB_HANDLE(class VoiceOverDialogClipEvents) Events; /* 0x0028 */
  FB_UINT8 SequenceIndex; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogClip) == 56);

}
