#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851EC0
   RuntimeId:        150A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA3C0
*/
enum RigidBodyType
{
  RBTypeCollision = 0,
  RBTypeDetail = 1,
  RBTypeCharacter = 2,
  RBTypeRaycast = 3,
  RBTypeGroup = 4,
  RBTypeProxy = 5,
  RBTypeSize = 6,
};

}
