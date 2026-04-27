#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858838
   RuntimeId:        1A57
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9AA0
   Default Value:    0000000142858850
*/
#pragma pack(push, 8)
struct MatchmakingSizeRule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Settings; /* 0x0000 */
  FB_STDARRAY(struct MatchmakingSizeConfiguration) Configurations; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingSizeRule) == 16);

}
