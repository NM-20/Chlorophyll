#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingSizeRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingPingSiteRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingRankedRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingVirtualizedRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingModRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingSlotUtilizationRule.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingHostViabilityRule.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858A50
   RuntimeId:        1A6D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B99E0
   Default Value:    0000000142BAB9D0
*/
#pragma pack(push, 8)
struct MatchmakingCriteria
{
  typedef struct ValueTypeInfo TypeInfo_t;

  MatchmakingSizeRule SizeRule; /* 0x0000 */
  MatchmakingPingSiteRule PingSiteRule; /* 0x0010 */
  MatchmakingRankedRule RankedRule; /* 0x0018 */
  FB_STDARRAY(struct MatchmakingGenericRule) GenericRules; /* 0x0020 */
  MatchmakingVirtualizedRule VirtualizedRule; /* 0x0028 */
  FB_STDARRAY(struct MatchmakingUserExtendedDataRule) UEDRules; /* 0x0038 */
  MatchmakingModRule ModRule; /* 0x0040 */
  MatchmakingSlotUtilizationRule SlotUtilizationRule; /* 0x0050 */
  MatchmakingHostViabilityRule HostViabilityRule; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingCriteria) == 112);

}
