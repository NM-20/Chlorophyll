#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/GenericRuleType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858918
   RuntimeId:        1A61
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6768
   Default Value:    0000000142858930
*/
#pragma pack(push, 8)
struct MatchmakingGenericRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Rule; /* 0x0000 */
  FB_CSTRING MinFitThresHold; /* 0x0008 */
  FB_CSTRING Setting; /* 0x0010 */
  GenericRuleType GenericRuleType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct MatchmakingRuleString) DesiredValues; /* 0x0020 */
  FB_BOOLEAN IgnoreIfDefault; /* 0x0028 */
  FB_BOOLEAN MergeValues; /* 0x0029 */
  FB_BOOLEAN SortValues; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingGenericRule) == 48);

}
