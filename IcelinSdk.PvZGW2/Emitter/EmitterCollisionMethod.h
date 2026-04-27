#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839CD8
   RuntimeId:        0708
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBB60
*/
enum EmitterCollisionMethod
{
  EmitterCollisionMethod_TerrainHeightMap = 0,
  EmitterCollisionMethod_RayCast = 1,
  EmitterCollisionMethod_RayCastDetailed = 2,
};

}
