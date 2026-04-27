#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 00000001428394F0
   RuntimeId:        068C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BBC00
   Default Value:    0000000142839510
*/
#pragma pack(push, 16)
struct PolynomialTempData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 Coefficients; /* 0x0000 */
  FB_FLOAT32 ScaleValue; /* 0x0010 */
  FB_FLOAT32 MinClamp; /* 0x0014 */
  FB_FLOAT32 MaxClamp; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PolynomialTempData) == 32);

}
