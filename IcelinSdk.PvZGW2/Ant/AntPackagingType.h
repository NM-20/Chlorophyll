#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428354D8
   RuntimeId:        02D6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD488
*/
enum AntPackagingType
{
  AntPackagingType_Chunk = 0,
  AntPackagingType_Bundle = 1,
  AntPackagingType_AnimationSet = 2,
  AntPackagingType_Static = 3,
  AntPackagingType_SharedLevel = 4,
  AntPackagingType_SharedBundle = 5,
  AntPackagingType_SharedGame = 6,
};

}
