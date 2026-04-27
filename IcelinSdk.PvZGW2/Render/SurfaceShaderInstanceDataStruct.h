#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428533A8
   RuntimeId:        1658
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B4F40
   Default Value:    00000001428533C0
*/
#pragma pack(push, 8)
struct SurfaceShaderInstanceDataStruct
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) Shader; /* 0x0000 */
  FB_STDARRAY(struct BoolShaderParameter) BoolParameters; /* 0x0008 */
  FB_STDARRAY(struct VectorShaderParameter) VectorParameters; /* 0x0010 */
  FB_STDARRAY(struct VectorArrayShaderParameter) VectorArrayParameters; /* 0x0018 */
  FB_STDARRAY(struct TextureShaderParameter) TextureParameters; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SurfaceShaderInstanceDataStruct) == 40);

}
