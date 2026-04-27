#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849DC8
   RuntimeId:        0E16
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB500
*/
enum PersistentValueType
{
  PersistentValueType_Set = 0,
  PersistentValueType_High = 1,
  PersistentValueType_Low = 2,
  PersistentValueType_Increment = 3,
  PersistentValueType_Decrement = 4,
};

}
