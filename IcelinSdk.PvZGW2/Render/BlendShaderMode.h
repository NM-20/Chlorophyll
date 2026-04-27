#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853510
   RuntimeId:        166C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C80C8
*/
enum BlendShaderMode
{
  BsmLerp = 0,
  BsmAdd = 1,
  BsmSubtract = 2,
  BsmMultiply = 3,
  BsmMultiply2x = 4,
  BsmScreen = 5,
  BsmDifference = 6,
  BsmLighten = 7,
  BsmDarken = 8,
  BsmOverlay = 9,
};

}
