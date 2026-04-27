#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834598
   RuntimeId:        01E6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC4C0
*/
enum ProviderEntityUpdateMode
{
  ProviderEntityUpdateMode_UpdateEveryFrame = 0,
  ProviderEntityUpdateMode_UpdateWhenUpdateValueInputIsFired = 1,
};

}
