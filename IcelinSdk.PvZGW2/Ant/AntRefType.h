#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835498
   RuntimeId:        02D2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD4A8
*/
enum AntRefType
{
  AntRefType_None = 0,
  AntRefType_Chunk = 1,
  AntRefType_3PChunk = 2,
  AntRefType_Lock = 3,
  AntRefType_ExcludeFromBundling = 4,
};

}
