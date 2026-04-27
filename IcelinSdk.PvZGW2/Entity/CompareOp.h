#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B360
   RuntimeId:        08AF
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB880
*/
enum CompareOp
{
  CompareOp_Equal = 0,
  CompareOp_NotEqual = 1,
  CompareOp_Greater = 2,
  CompareOp_Less = 3,
  CompareOp_GreaterOrEqual = 4,
  CompareOp_LessOrEqual = 5,
};

}
