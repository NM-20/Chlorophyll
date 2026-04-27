#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855D28
   RuntimeId:        1888
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9E60
*/
enum AlphaOutputMode
{
  AlphaOutputMode_Disabled = 0,
  AlphaOutputMode_Clear = 1,
  AlphaOutputMode_CloudLayerOnly = 2,
  AlphaOutputMode_MaskOnly = 3,
  AlphaOutputMode_CloudLayerAndMask = 4,
};

}
