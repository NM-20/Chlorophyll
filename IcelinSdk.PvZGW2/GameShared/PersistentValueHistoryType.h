#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A0C8
   RuntimeId:        0E42
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB480
*/
enum PersistentValueHistoryType
{
  PersistentValueHistoryType_None = 0,
  PersistentValueHistoryType_Delta = 1,
  PersistentValueHistoryType_DeltaAndAbsolute = 2,
  PersistentValueHistoryType_HistoryOnly = 3,
};

}
