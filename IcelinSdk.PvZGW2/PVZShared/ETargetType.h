#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872DB0
   RuntimeId:        2B52
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7E20
*/
enum ETargetType
{
  ETarget_Null = 0,
  ETarget_Best = 1,
  ETarget_BestVisible = 2,
  ETarget_ClosestHuman = 3,
  ETarget_Owner = 4,
  ETarget_Closest = 5,
  ETarget_ClosestVisible = 6,
  ETarget_OnlyPrioritized = 7,
};

}
