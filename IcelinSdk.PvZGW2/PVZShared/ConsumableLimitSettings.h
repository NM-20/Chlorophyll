#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868CB0
   RuntimeId:        241F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8F80
   Default Value:    000000014286671C
*/
#pragma pack(push, 4)
struct ConsumableLimitSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 RainbowStarLimit; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(ConsumableLimitSettings) == 4);

}
