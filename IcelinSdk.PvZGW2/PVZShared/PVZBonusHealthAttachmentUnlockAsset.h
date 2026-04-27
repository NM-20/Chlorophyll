#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAttachmentUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869010
   RuntimeId:        2453
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072C
   VfTable:          0000000142356060
   Address (Base):   00000001430DA3D0
*/
#pragma pack(push, 8)
class PVZBonusHealthAttachmentUnlockAsset : public PVZAttachmentUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Health; /* 0x0108 */
  char pad_010C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(PVZBonusHealthAttachmentUnlockAsset) == 272);

}
