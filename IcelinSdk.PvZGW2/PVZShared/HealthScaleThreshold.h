#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862F00
   RuntimeId:        20D4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4D88
   Default Value:    0000000142862F18
*/
#pragma pack(push, 8)
struct HealthScaleThreshold
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 ConsecutiveDeaths; /* 0x0000 */
  FB_FLOAT32 HealthMultiplier; /* 0x0004 */
  FB_CSTRING UIDisplaySid; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HealthScaleThreshold) == 16);

}
