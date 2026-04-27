#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876FB0
   RuntimeId:        2E44
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7BE0
*/
enum WebUtilsEnvironment
{
  WebUtilsEnvironment_Development = 0,
  WebUtilsEnvironment_Test = 1,
  WebUtilsEnvironment_Certification = 2,
  WebUtilsEnvironment_Production = 3,
  WebUtilsEnvironment_Any = 4,
  WebUtilsEnvironment_Invalid = 5,
  WebUtilsEnvironment_Count = 6,
};

}
