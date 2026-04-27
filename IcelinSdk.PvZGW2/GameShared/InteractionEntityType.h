#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849380
   RuntimeId:        0D78
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB600
*/
enum InteractionEntityType
{
  IET_None = 0,
  IET_RushCrateArm = 1,
  IET_RushCrateDisarm = 2,
  IET_ObliterationDropOffArm = 3,
  IET_CTFFlag = 4,
};

}
