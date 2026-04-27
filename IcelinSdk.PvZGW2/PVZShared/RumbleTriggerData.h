#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AE58
   RuntimeId:        25F2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B66B8
   Default Value:    0000000142BFECA8
*/
#pragma pack(push, 4)
struct RumbleTriggerData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 LowRumble; /* 0x0000 */
  FB_FLOAT32 HighRumble; /* 0x0004 */
  FB_FLOAT32 Duration; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(RumbleTriggerData) == 12);

}
