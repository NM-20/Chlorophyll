#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872068
   RuntimeId:        2B05
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6F
   VfTable:          000000014236BDB8
   Address (Base):   00000001430F53B0
*/
#pragma pack(push, 8)
class UICardPackConsumableItemDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ConsumableIdentifier; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING Label; /* 0x0030 */
  FB_CSTRING Description; /* 0x0038 */
  FB_CSTRING Category; /* 0x0040 */
  RarenessLevel RarenessLevel; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING ImageName; /* 0x0050 */
  FB_UINT32 Quantity; /* 0x0058 */
  FB_INT32 TeamId; /* 0x005C */
  FB_BOOLEAN DisplayQuantity; /* 0x0060 */
  FB_BOOLEAN IsSpecialConsumable; /* 0x0061 */
  char pad_0062[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UICardPackConsumableItemDescription) == 104);

}
