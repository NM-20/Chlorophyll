#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428582B8
   RuntimeId:        1A23
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9B40
*/
enum GamePeer2PeerMode
{
  GamePeer2PeerMode_FullMesh = 0,
  GamePeer2PeerMode_PartialMesh = 1,
  GamePeer2PeerMode_DirtyCastFailover = 2,
};

}
