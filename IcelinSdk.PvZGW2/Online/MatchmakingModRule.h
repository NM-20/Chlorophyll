#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428589C0
   RuntimeId:        1A67
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9A40
   Default Value:    00000001428589D8
*/
#pragma pack(push, 8)
struct MatchmakingModRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct MatchmakingMod) Mods; /* 0x0000 */
  FB_CSTRING MinFitThresholdListName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingModRule) == 16);

}
