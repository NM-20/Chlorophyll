#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855D48
   RuntimeId:        188A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9E40
*/
enum SkyType
{
  SkyType_Procedural = 0,
  SkyType_Procedural_Hdri = 1,
  SkyType_Hdri = 2,
  SkyType_Physical = 3,
};

}
