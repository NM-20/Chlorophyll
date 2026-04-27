#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingVirtualizationMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428587E8
   RuntimeId:        1A53
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9AC0
   Default Value:    0000000142858800
*/
#pragma pack(push, 8)
struct MatchmakingVirtualizedRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING MinFitThreshold; /* 0x0000 */
  MatchmakingVirtualizationMode VirtualizationMode; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingVirtualizedRule) == 16);

}
