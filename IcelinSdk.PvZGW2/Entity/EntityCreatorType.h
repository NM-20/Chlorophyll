#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A8A8
   RuntimeId:        0805
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CCB08
*/
enum EntityCreatorType
{
  EntityCreatorType_Unknown = 0,
  EntityCreatorType_Level = 1,
  EntityCreatorType_Spawner = 2,
  EntityCreatorType_Owner = 3,
  EntityCreatorType_Ghost = 4,
};

}
