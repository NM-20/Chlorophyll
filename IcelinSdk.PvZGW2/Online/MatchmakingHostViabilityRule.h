#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858A28
   RuntimeId:        1A6B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9A00
   Default Value:    0000000142858A40
*/
#pragma pack(push, 8)
struct MatchmakingHostViabilityRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING MinFitThreshold; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingHostViabilityRule) == 8);

}
