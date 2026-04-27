#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853290
   RuntimeId:        164C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8228
   Default Value:    00000001428532A8
*/
#pragma pack(push, 8)
struct BoolShaderParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ParameterName; /* 0x0000 */
  FB_BOOLEAN Value; /* 0x0008 */
  char pad_0009[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BoolShaderParameter) == 16);

}
