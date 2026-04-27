#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B9E0
   RuntimeId:        2670
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C30E8
*/
enum CardPackType
{
  CardPackType_Regular = 0,
  CardPackType_LuckOTheZombie = 17,
  CardPackType_Springening = 16,
  CardPackType_Feastivus = 15,
  CardPackType_BlackMarket = 14,
  CardPackType_LawnOfDoom = 13,
  CardPackType_CommunityPortalReward = 12,
  CardPackType_CommunityEventReward = 11,
  CardPackType_Character = 10,
  CardPackType_Legendary = 9,
  CardPackType_ForChestsUnopened = 8,
  CardPackType_ForChests = 7,
  CardPackType_HideFromStore = 6,
  CardPackType_HeroShowcase = 5,
  CardPackType_BestValue = 4,
  CardPackType_Discounted = 3,
  CardPackType_Popular = 2,
  CardPackType_Special = 1,
  CardPackType_Sparkler = 18,
  NumCardPackTypes = 19,
};

}
