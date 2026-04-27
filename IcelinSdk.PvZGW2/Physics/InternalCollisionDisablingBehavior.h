#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428519A8
   RuntimeId:        14BE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA3E0
*/
enum InternalCollisionDisablingBehavior
{
  InternalCollisionDisablingBehavior_Auto = 0,
  InternalCollisionDisablingBehavior_DisableNone = 1,
  InternalCollisionDisablingBehavior_DisableConstrained = 2,
};

}
