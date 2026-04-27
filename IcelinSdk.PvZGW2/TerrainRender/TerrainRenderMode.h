#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854738
   RuntimeId:        175B
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9FE0
*/
enum TerrainRenderMode
{
  TerrainRenderMode_Default = 0,
  TerrainRenderMode_DrawPassCount2d = 1,
  TerrainRenderMode_LayerCount2d = 2,
  TerrainRenderMode_LayerCount3d = 3,
  TerrainRenderMode_MaskedLayerCount2d = 4,
  TerrainRenderMode_MaskedLayerCount3d = 5,
  TerrainRenderMode_DensityMap = 6,
};

}
