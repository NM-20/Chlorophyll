#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854B68
   RuntimeId:        17A5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7828
   Default Value:    0000000142BF6E90
*/
#pragma pack(push, 16)
struct ColorKeyframe
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 RGBColor; /* 0x0000 */
  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ColorKeyframe) == 32);

}
