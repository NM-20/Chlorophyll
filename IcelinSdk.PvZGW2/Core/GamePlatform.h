#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833838
   RuntimeId:        013D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B4948
*/
enum GamePlatform
{
  GamePlatform_Ps3 = 0,
  GamePlatform_Win32 = 1,
  GamePlatform_Xenon = 2,
  GamePlatform_Gen4a = 3,
  GamePlatform_Gen4b = 4,
  GamePlatform_Android = 5,
  GamePlatform_iOS = 6,
  GamePlatform_OSX = 7,
  GamePlatform_Linux = 8,
  GamePlatform_Any = 9,
  GamePlatform_Invalid = 10,
  GamePlatformCount = 11,
};

}
