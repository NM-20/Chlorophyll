#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868A70
   RuntimeId:        2419
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8FE0
   Default Value:    0000000142868A88
*/
#pragma pack(push, 4)
struct DailyQuestsSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinimumRefreshDelayTime; /* 0x0000 */
  FB_FLOAT32 MaximumRefreshDelayTime; /* 0x0004 */
  FB_FLOAT32 StaleTimeout; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(DailyQuestsSettings) == 12);

}
