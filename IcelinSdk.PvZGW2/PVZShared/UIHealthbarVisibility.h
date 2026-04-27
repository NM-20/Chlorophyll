#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A7C0
   RuntimeId:        25A1
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8D40
*/
enum UIHealthbarVisibility
{
  UIHealthbarVisibility_None = 0,
  UIHealthbarVisibility_ShowForAll = 1,
  UIHealthbarVisibility_ShowForAllFriendlies = 2,
  UIHealthbarVisibility_ShowForHealerFriendlies = 3,
  UIHealthbarVisibility_ShowForEnemies = 4,
};

}
