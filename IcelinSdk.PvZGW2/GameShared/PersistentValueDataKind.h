#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849E08
   RuntimeId:        0E1A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C9728
*/
enum PersistentValueDataKind
{
  PersistentValueDataKind_Raw = 0,
  PersistentValueDataKind_Seconds = 1,
  PersistentValueDataKind_Minutes = 2,
  PersistentValueDataKind_Hours = 3,
  PersistentValueDataKind_Percent = 4,
};

}
