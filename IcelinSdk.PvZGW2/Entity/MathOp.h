#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B2A0
   RuntimeId:        08A3
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CCA68
*/
enum MathOp
{
  MathOp_Add = 0,
  MathOp_Subtract = 1,
  MathOp_Multiply = 2,
  MathOp_Divide = 3,
  MathOp_Min = 4,
  MathOp_Max = 5,
  MathOp_Modulo = 6,
  MathOp_Exponent = 7,
};

}
