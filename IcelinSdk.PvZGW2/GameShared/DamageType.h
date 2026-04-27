#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A478
   RuntimeId:        0E78
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5300
*/
enum DamageType
{
  DamageType_Ignored = 0,
  DamageType_Heal = 1,
  DamageType_Normal = 2,
  DamageType_Turret = 3,
  DamageType_Fire = 4,
  DamageType_Ice = 5,
  DamageType_Toxic = 6,
  DamageType_Energy = 7,
  DamageType_Electric = 8,
  DamageType_Count = 9,
};

}
