#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D1B8
   RuntimeId:        27A9
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8760
*/
enum CompareType
{
  CompareType_Equal = 0,
  CompareType_NotEqual = 1,
  CompareType_GreaterThan = 2,
  CompareType_GreaterThanEqual = 3,
  CompareType_LessThan = 4,
  CompareType_LessThanEqual = 5,
};

}
