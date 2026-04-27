#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850658
   RuntimeId:        13A1
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA700
*/
enum RepulsionConstraintMode
{
  NOT_PUSHABLE = 0,
  PUSHABLE_WITHIN_GLOBAL_HORIZONTAL_PLANE = 1,
  PUSHABLE_WITHIN_LAST_AREA_NORMAL = 2,
};

}
