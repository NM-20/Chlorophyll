#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A700
   RuntimeId:        0E9E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB3C0
*/
enum DynamicAvoidanceMode
{
  DynamicAvoidanceMode_Never = 0,
  DynamicAvoidanceMode_WhenScripted = 1,
  DynamicAvoidanceMode_WhenNotScripted = 2,
  DynamicAvoidanceMode_Always = 3,
};

}
