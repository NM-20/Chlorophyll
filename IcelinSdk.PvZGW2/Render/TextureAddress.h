#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852720
   RuntimeId:        159A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA340
*/
enum TextureAddress
{
  TaWrap = 0,
  TaMirror = 1,
  TaClamp = 2,
  TaBorder = 4,
  TaMirrorOnce = 5,
};

}
