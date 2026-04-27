#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428543C8
   RuntimeId:        1724
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7948
*/
enum RasterTreeBuildMode
{
  RasterTreeBuildMode_InlinePersistentStreamRest = 0,
  RasterTreeBuildMode_InlinePersistentRemoveRest = 1,
  RasterTreeBuildMode_InlineAll = 2,
};

}
