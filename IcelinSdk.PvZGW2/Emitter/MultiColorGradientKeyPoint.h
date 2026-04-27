#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428396F8
   RuntimeId:        06AA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCC88
   Default Value:    0000000142B8A340
*/
#pragma pack(push, 16)
struct MultiColorGradientKeyPoint
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Color; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MultiColorGradientKeyPoint) == 16);

}
