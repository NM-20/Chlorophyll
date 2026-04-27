#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DA58
   RuntimeId:        115F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9088
   Default Value:    000000014284DA70
*/
#pragma pack(push, 16)
struct CameraLeapData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0000 */
  FB_FLOAT32 Time; /* 0x0040 */
  FB_FLOAT32 FovModifier; /* 0x0044 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CameraLeapData) == 80);

}
