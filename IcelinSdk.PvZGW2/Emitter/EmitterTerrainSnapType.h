#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839CF8
   RuntimeId:        070A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBB40
*/
enum EmitterTerrainSnapType
{
  EmitterTerrainSnapType_SpawnOnly = 0,
  EmitterTerrainSnapType_RenderingOnly = 1,
  EmitterTerrainSnapType_SpawnAndRendering = 2,
};

}
