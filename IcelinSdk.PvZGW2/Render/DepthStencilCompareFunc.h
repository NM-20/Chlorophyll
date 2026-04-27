#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428524D0
   RuntimeId:        1576
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8608
*/
enum DepthStencilCompareFunc
{
  DepthStencilCompareFunc_Never = 0,
  DepthStencilCompareFunc_Less = 1,
  DepthStencilCompareFunc_Equal = 2,
  DepthStencilCompareFunc_LessEqual = 3,
  DepthStencilCompareFunc_Greater = 4,
  DepthStencilCompareFunc_NotEqual = 5,
  DepthStencilCompareFunc_GreaterEqual = 6,
  DepthStencilCompareFunc_Always = 7,
};

}
