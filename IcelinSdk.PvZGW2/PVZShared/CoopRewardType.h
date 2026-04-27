#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428733A8
   RuntimeId:        2BAC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7FE0
*/
enum CoopRewardType
{
  CoopRewardType_None = 0,
  CoopRewardType_Coin = 1,
  CoopRewardType_BagOfCoins = 2,
  CoopRewardType_Diamonds = 3,
  CoopRewardType_Count = 4,
};

}
