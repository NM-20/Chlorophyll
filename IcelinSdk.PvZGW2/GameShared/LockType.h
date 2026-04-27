#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A538
   RuntimeId:        0E84
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB420
*/
enum LockType
{
  LockAlways = 0,
  LockOnRadar = 1,
  LockOnHeat = 2,
  LockOnLaserPainted = 3,
  LockNever = 4,
  LockTypeCount = 5,
};

}
