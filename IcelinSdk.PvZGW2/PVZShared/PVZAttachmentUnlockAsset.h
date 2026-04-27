#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZVisualUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868FB0
   RuntimeId:        244D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072B
   VfTable:          0000000142356090
   Address (Base):   00000001430E4F60
*/
#pragma pack(push, 8)
class PVZAttachmentUnlockAsset : public PVZVisualUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN IsHat; /* 0x0100 */
  char pad_0101[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */
#pragma pack(pop)

static_assert(sizeof(PVZAttachmentUnlockAsset) == 264);

}
