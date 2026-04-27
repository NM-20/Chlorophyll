#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870BC8
   RuntimeId:        29F3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1928
   Default Value:    0000000142870BE0
*/
#pragma pack(push, 8)
struct UILeaderboardEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 OnlineId; /* 0x0000 */
  FB_INT32 Position; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING PlayerName; /* 0x0010 */
  FB_CSTRING DisplayName; /* 0x0018 */
  FB_STDARRAY(struct UILeaderboardStat) Stats; /* 0x0020 */
  FB_BOOLEAN IsLocal; /* 0x0028 */
  FB_BOOLEAN IsFriend; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UILeaderboardEntry) == 48);

}
