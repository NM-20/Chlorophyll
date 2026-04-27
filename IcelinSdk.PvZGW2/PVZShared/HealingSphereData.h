#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ADC8
   RuntimeId:        25EA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C32A8
   Default Value:    0000000142867338
*/
#pragma pack(push, 4)
struct HealingSphereData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0000 */
  FB_FLOAT32 HealthIncSpeed; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(HealingSphereData) == 8);

}
