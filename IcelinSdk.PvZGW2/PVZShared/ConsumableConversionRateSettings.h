#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868CD0
   RuntimeId:        2421
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8F60
   Default Value:    0000000142866A28
*/
#pragma pack(push, 4)
struct ConsumableConversionRateSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 StarToRainbowStar; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(ConsumableConversionRateSettings) == 4);

}
