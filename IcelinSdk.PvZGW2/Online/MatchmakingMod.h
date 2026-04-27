#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858998
   RuntimeId:        1A65
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6728
   Default Value:    00000001428589B0
*/
#pragma pack(push, 8)
struct MatchmakingMod
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Licenses; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingMod) == 8);

}
