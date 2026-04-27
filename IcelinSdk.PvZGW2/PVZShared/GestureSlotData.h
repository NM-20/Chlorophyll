#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864308
   RuntimeId:        21CB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4948
   Default Value:    0000000142864320
*/
#pragma pack(push, 8)
struct GestureSlotData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING UISlotSid; /* 0x0000 */
  FB_UINT32 slotIndex; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GestureSlotData) == 16);

}
