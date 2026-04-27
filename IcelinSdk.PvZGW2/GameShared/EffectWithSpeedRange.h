#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428499F8
   RuntimeId:        0DDA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9748
   Default Value:    0000000142849A10
*/
#pragma pack(push, 8)
struct EffectWithSpeedRange
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0000 */
  FB_FLOAT32 MinSpeed; /* 0x0008 */
  FB_FLOAT32 MaxSpeed; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EffectWithSpeedRange) == 16);

}
