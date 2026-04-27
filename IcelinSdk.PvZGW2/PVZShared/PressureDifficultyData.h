#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873B48
   RuntimeId:        2C1E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0EE8
   Default Value:    0000000142873B60
*/
#pragma pack(push, 4)
struct PressureDifficultyData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 WeightLimit; /* 0x0000 */
  FB_FLOAT32 MeleePressureLimit; /* 0x0004 */
  FB_FLOAT32 RangedPressureLimit; /* 0x0008 */
  FB_BOOLEAN AllowTargetOverLimit; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PressureDifficultyData) == 16);

}
