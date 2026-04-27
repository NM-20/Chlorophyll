#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853160
   RuntimeId:        163A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B67D8
*/
enum BlurFilter
{
  BfNone = 0,
  BfGaussian3Pixels = 1,
  BfGaussian5Pixels = 2,
  BfGaussian7Pixels = 3,
  BfGaussian9Pixels = 4,
  BfGaussian15Pixels = 5,
  BfGaussian31Pixels = 6,
};

}
