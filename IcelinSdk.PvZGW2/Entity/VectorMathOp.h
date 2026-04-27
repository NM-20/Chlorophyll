#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B2E0
   RuntimeId:        08A7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB8A0
*/
enum VectorMathOp
{
  VectorMathOp_Add = 0,
  VectorMathOp_Subtract = 1,
  VectorMathOp_MultiplyByFloat = 2,
  VectorMathOp_DivideByFloat = 3,
  VectorMathOp_Cross = 4,
  VectorMathOp_Dot = 5,
  VectorMathOp_Length = 6,
};

}
