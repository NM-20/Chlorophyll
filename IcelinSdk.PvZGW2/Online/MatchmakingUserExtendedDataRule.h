#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858968
   RuntimeId:        1A63
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6748
   Default Value:    0000000142858980
*/
#pragma pack(push, 8)
struct MatchmakingUserExtendedDataRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Rule; /* 0x0000 */
  FB_CSTRING MinFitThresHold; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingUserExtendedDataRule) == 16);

}
