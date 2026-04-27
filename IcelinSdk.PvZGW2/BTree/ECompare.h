#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428340B8
   RuntimeId:        0193
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD508
*/
enum ECompare
{
  Compare_Equal = 0,
  Compare_NotEqual = 1,
  Compare_LessThan = 2,
  Compare_MoreThan = 3,
  Compare_EqualLessThan = 4,
  Compare_EqualMoreThan = 5,
};

}
