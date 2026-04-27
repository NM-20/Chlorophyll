#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428588B0
   RuntimeId:        1A5D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9A60
   Default Value:    00000001428588C8
*/
#pragma pack(push, 8)
struct MatchmakingRankedRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING MinFitThreshold; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingRankedRule) == 8);

}
