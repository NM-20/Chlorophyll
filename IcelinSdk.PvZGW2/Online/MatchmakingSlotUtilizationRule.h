#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428589F0
   RuntimeId:        1A69
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9A20
   Default Value:    0000000142858A08
*/
#pragma pack(push, 8)
struct MatchmakingSlotUtilizationRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 PreferredPercentage; /* 0x0000 */
  FB_UINT32 MinPercentage; /* 0x0004 */
  FB_UINT32 MaxPercentage; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING RangeOffsetListName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingSlotUtilizationRule) == 24);

}
