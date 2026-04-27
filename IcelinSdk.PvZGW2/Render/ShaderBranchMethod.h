#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853550
   RuntimeId:        1670
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8088
*/
enum ShaderBranchMethod
{
  SbmStatic = 0,
  SbmFlat = 1,
  SbmDynamicIfElse = 2,
  SbmDynamicIfTrue = 3,
  SbmDynamicIfFalse = 4,
};

}
