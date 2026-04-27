#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875A90
   RuntimeId:        2D42
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6558
*/
enum UIState
{
  UIState_Static = 0,
  UIState_StaticGenerated = 1,
  UIState_Loading = 2,
  UIState_Playing = 3,
  UIState_Menu = 4,
  UIState_PreEndOfRound = 5,
  UIState_EndOfRound = 6,
  UIState_None = 7,
};

}
