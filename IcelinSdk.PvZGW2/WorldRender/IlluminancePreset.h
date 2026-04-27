#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856288
   RuntimeId:        18DA
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7228
*/
enum IlluminancePreset
{
  IlluminancePreset_OutdoorSunnyDay = 120000,
  IlluminancePreset_OutdoorOvercastDay = 2000,
  IlluminancePreset_OutdoorStreetNight = 15,
  IlluminancePreset_OutdoorCountrySideNight = 1,
  IlluminancePreset_IndoorOffice = 1000,
};

}
