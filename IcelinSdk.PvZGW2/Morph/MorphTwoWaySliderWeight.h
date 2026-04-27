#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FBF8
   RuntimeId:        1333
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8BE8
   Default Value:    0000000142BF51C8
*/
#pragma pack(push, 8)
struct MorphTwoWaySliderWeight
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Weight; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class MorphTwoWaySlider) Slider; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MorphTwoWaySliderWeight) == 16);

}
