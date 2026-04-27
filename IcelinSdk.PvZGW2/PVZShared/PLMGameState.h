#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A450
   RuntimeId:        257B
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C34A8
*/
enum PLMGameState
{
  PLMGameState_MenuMain = 0,
  PLMGameState_MenuOptions = 1,
  PLMGameState_MenuCredits = 2,
  PLMGameState_MenuPremium = 3,
  PLMGameState_MenuSoldier = 4,
  PLMGameState_MenuStore = 5,
  PLMGameState_MenuSingleplayer = 6,
  PLMGameState_MenuMultiplayer = 7,
  PLMGameState_IngameSingleplayer = 8,
  PLMGameState_Count = 9,
};

}
