#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856348
   RuntimeId:        18E6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9CE0
*/
enum LightTileDebugLightCountMode
{
  LightTileDebugLightCountMode_Total = 0,
  LightTileDebugLightCountMode_Punctual = 1,
  LightTileDebugLightCountMode_PunctualShadow = 2,
  LightTileDebugLightCountMode_Area = 3,
  LightTileDebugLightCountMode_AreaShadow = 4,
  LightTileDebugLightCountMode_LocalIBL = 5,
  LightTileDebugLightCountMode_LocalPR = 6,
};

}
