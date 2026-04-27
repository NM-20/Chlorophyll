#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428526C0
   RuntimeId:        1594
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8568
*/
enum ShaderTextureDecompression
{
  ShaderTextureDecompression_None = 0,
  ShaderTextureDecompression_NormalAG = 1,
  ShaderTextureDecompression_NormalRG = 2,
  ShaderTextureDecompression_NormalRGA = 3,
  ShaderTextureDecompression_NormalRGorAG = 4,
};

}
