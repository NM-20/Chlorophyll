#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CCD8
   RuntimeId:        10AC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAF00
   Default Value:    0000000142BF4D90
*/
#pragma pack(push, 4)
struct LandingGearConditionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Height; /* 0x0000 */
  FB_FLOAT32 Velocity; /* 0x0004 */
  FB_FLOAT32 Angle; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(LandingGearConditionData) == 12);

}
