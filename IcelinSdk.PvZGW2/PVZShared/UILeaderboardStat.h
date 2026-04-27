#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870BA0
   RuntimeId:        29F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1948
   Default Value:    0000000142870BB8
*/
#pragma pack(push, 8)
struct UILeaderboardStat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatValue; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(UILeaderboardStat) == 8);

}
