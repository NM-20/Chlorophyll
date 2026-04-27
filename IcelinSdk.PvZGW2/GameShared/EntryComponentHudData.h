#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EntrySeatType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E0C8
   RuntimeId:        11B9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAC20
   Default Value:    000000014284E0E0
*/
#pragma pack(push, 4)
struct EntryComponentHudData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Index; /* 0x0000 */
  EntrySeatType SeatType; /* 0x0004 */
  FB_BOOLEAN Frustum; /* 0x0008 */
  FB_BOOLEAN Visible; /* 0x0009 */
  FB_BOOLEAN MaximizeMiniMapOnEntry; /* 0x000A */
  char pad_000B[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(EntryComponentHudData) == 12);

}
