#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868F50
   RuntimeId:        2447
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8F40
*/
enum RarenessLevel
{
  RarenessLevel_Common = 1000,
  RarenessLevel_Uncommon = 2000,
  RarenessLevel_Rare = 3000,
  RarenessLevel_SuperRare = 4000,
  RarenessLevel_Legendary = 5000,
  RarenessLevel_Special = 6000,
  RarenessLevel_Limited = 7000,
  RarenessLevel_Classic = 8000,
};

}
