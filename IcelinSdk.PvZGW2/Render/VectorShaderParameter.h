#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Render/ShaderParameterType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428532C0
   RuntimeId:        164E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8208
   Default Value:    00000001428532F0
*/
#pragma pack(push, 16)
struct VectorShaderParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 Value; /* 0x0000 */
  FB_CSTRING ParameterName; /* 0x0010 */
  ShaderParameterType ParameterType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VectorShaderParameter) == 32);

}
