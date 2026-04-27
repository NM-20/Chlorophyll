#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870C18
   RuntimeId:        29F5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1908
   Default Value:    0000000142870C30
*/
#pragma pack(push, 8)
struct UILeaderboardColumn
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Title; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(UILeaderboardColumn) == 8);

}
