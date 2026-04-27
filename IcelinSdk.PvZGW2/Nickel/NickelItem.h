#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857DB8
   RuntimeId:        19AA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7028
   Default Value:    0000000142857DD0
*/
#pragma pack(push, 8)
struct NickelItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0000 */
  FB_CSTRING DimeId; /* 0x0008 */
  FB_CSTRING DisplayName; /* 0x0010 */
  FB_CSTRING Description; /* 0x0018 */
  FB_CSTRING PriceString; /* 0x0020 */
  FB_CSTRING OriginalPriceString; /* 0x0028 */
  FB_INT32 Price; /* 0x0030 */
  FB_INT32 ConsumableCount; /* 0x0034 */
  FB_STDARRAY(struct NickelItemCustomField) CustomFields; /* 0x0038 */
  FB_BOOLEAN Consumable; /* 0x0040 */
  FB_BOOLEAN isPurchasble; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NickelItem) == 72);

}
