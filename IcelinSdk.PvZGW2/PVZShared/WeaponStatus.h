#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872EF0
   RuntimeId:        2B66
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C1088
*/
enum WeaponStatus
{
  ReadyToFire = 0,
  Reloading = 1,
  ClipEmpty = 2,
  WeaponError = 3,
};

}
