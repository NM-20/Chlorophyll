#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858E98
   RuntimeId:        1AA7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6758
*/
enum OnlineEnvironment
{
  OnlineEnvironment_Development = 0,
  OnlineEnvironment_Test = 1,
  OnlineEnvironment_Certification = 2,
  OnlineEnvironment_Production = 3,
  OnlineEnvironment_Count = 4,
};

}
