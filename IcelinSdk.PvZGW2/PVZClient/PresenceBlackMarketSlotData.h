#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859EB0
   RuntimeId:        1B8D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5E08
   Default Value:    0000000142859EC8
*/
#pragma pack(push, 8)
struct PresenceBlackMarketSlotData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING SlotId; /* 0x0000 */
  FB_CSTRING ItemId; /* 0x0008 */
  FB_UINT32 Price; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING Name; /* 0x0018 */
  FB_CSTRING Description; /* 0x0020 */
  FB_BOOLEAN HasBeenPurchased; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresenceBlackMarketSlotData) == 48);

}
