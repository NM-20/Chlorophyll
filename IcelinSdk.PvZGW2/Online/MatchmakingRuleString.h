#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingPlatform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428588D8
   RuntimeId:        1A5F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6788
   Default Value:    00000001428588F0
*/
#pragma pack(push, 8)
struct MatchmakingRuleString
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Value; /* 0x0000 */
  MatchmakingPlatform Platform; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(FB_CSTRING) Licenses; /* 0x0010 */
  FB_BOOLEAN UseOnlyIfEmpty; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingRuleString) == 32);

}
