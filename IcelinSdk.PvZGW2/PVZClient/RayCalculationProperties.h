#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859650
   RuntimeId:        1B32
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C65C8
   Default Value:    0000000142859668
*/
#pragma pack(push, 8)
struct RayCalculationProperties
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING RayName; /* 0x0000 */
  FB_FLOAT32 RayWeight; /* 0x0008 */
  FB_FLOAT32 RayMaxDistanceLimit; /* 0x000C */
  FB_BOOLEAN RayMaxDistanceLimitEnabled; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RayCalculationProperties) == 24);

}
