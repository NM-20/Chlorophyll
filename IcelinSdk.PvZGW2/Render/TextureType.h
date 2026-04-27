#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852700
   RuntimeId:        1598
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8548
*/
enum TextureType
{
  TextureType_1d = 5,
  TextureType_1dArray = 4,
  TextureType_2d = 0,
  TextureType_2dArray = 3,
  TextureType_Cube = 1,
  TextureType_3d = 2,
  TextureType_CubeArray = 6,
  TextureTypeCount = 7,
};

}
