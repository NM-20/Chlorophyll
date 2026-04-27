#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428524F0
   RuntimeId:        1578
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C85E8
*/
enum StencilOperation
{
  StencilOperation_Keep = 0,
  StencilOperation_Zero = 1,
  StencilOperation_Replace = 2,
  StencilOperation_IncrementSaturate = 3,
  StencilOperation_DecrementSaturate = 4,
  StencilOperation_Invert = 5,
  StencilOperation_IncrementWrap = 6,
  StencilOperation_DecrementWrap = 7,
};

}
