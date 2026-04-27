#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859F00
   RuntimeId:        1B8F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5DE8
   Default Value:    0000000142859F18
*/
#pragma pack(push, 8)
struct PresenceBlackMarketData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT64 TimeOfInactivity; /* 0x0000 */
  FB_CSTRING ActivationId; /* 0x0008 */
  FB_STDARRAY(FB_CSTRING) InitialViewDialogue; /* 0x0010 */
  FB_STDARRAY(FB_CSTRING) SubsequentViewDialogue; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) NoAvailableItemsDialogue; /* 0x0020 */
  FB_STDARRAY(struct PresenceBlackMarketSlotData) Slots; /* 0x0028 */
  FB_BOOLEAN IsActive; /* 0x0030 */
  FB_BOOLEAN HasBeenViewed; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PresenceBlackMarketData) == 56);

}
