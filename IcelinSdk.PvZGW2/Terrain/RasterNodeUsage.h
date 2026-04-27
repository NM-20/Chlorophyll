#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853F28
   RuntimeId:        16DA
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7C08
*/
enum RasterNodeUsage
{
  RasterNodeUsage_Default = 0,
  RasterNodeUsage_Disabled = 1,
  RasterNodeUsage_Persistent = 2,
  RasterNodeUsage_PersistentDedicatedServer = 3,
  RasterNodeUsage_Skipped = 4,
};

}
