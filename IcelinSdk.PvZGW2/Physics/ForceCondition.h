#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850F58
   RuntimeId:        1422
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA5E0
*/
enum ForceCondition
{
  FCNever = 0,
  FCNotCriticalDamaged = 1,
  FCCriticalDamaged = 2,
  FCNotOccupied = 3,
  FCOccupied = 4,
  FCAlways = 5,
};

}
