#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876428
   RuntimeId:        2DB2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C05A8
*/
enum IntMathOp
{
  IntMathOp_Add = 0,
  IntMathOp_Subtract = 1,
  IntMathOp_Multiply = 2,
  IntMathOp_Divide = 3,
  IntMathOp_Min = 4,
  IntMathOp_Max = 5,
  IntMathOp_Modulo = 6,
  IntMathOp_Exponent = 7,
};

}
