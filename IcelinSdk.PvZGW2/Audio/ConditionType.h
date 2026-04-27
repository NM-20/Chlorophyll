#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835758
   RuntimeId:        02F5
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC380
*/
enum ConditionType
{
  ConditionType_And = 0,
  ConditionType_Or = 1,
  ConditionType_XOr = 2,
  ConditionType_Equal = 3,
  ConditionType_NotEqual = 4,
  ConditionType_Less = 5,
  ConditionType_Greater = 6,
  ConditionType_LessOrEqual = 7,
  ConditionType_GreaterOrEqual = 8,
};

}
