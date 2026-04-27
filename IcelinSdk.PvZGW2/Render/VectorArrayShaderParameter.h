#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ShaderParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853348
   RuntimeId:        1652
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C81C8
   Default Value:    00000001428532D8
*/
#pragma pack(push, 8)
struct VectorArrayShaderParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ParameterName; /* 0x0000 */
  ShaderParameterType ParameterType; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(struct Vec4) Values; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VectorArrayShaderParameter) == 24);

}
