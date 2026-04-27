#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835D48
   RuntimeId:        0353
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC280
*/
enum SimpleTransformOperation
{
  SimpleTransformOperation_Add = 0,
  SimpleTransformOperation_Log10 = 17,
  SimpleTransformOperation_Log = 16,
  SimpleTransformOperation_Exp = 15,
  SimpleTransformOperation_Absolute = 14,
  SimpleTransformOperation_SquareRoot = 13,
  SimpleTransformOperation_Power = 12,
  SimpleTransformOperation_Ceiling = 11,
  SimpleTransformOperation_Floor = 10,
  SimpleTransformOperation_Round = 9,
  SimpleTransformOperation_Modulus = 8,
  SimpleTransformOperation_ArcCosine = 7,
  SimpleTransformOperation_ArcSine = 6,
  SimpleTransformOperation_Cosine = 5,
  SimpleTransformOperation_Sine = 4,
  SimpleTransformOperation_Divide = 3,
  SimpleTransformOperation_Multiply = 2,
  SimpleTransformOperation_Subtract = 1,
  SimpleTransformOperation_Tangent = 18,
  SimpleTransformOperation_ArcTangent = 19,
};

}
