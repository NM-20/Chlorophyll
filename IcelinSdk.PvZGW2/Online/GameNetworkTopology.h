#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858298
   RuntimeId:        1A21
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9B60
*/
enum GameNetworkTopology
{
  GameNetworkTopology_Disabled = 0,
  GameNetworkTopology_Peer2Peer = 1,
  GameNetworkTopology_PeerHosted = 2,
  GameNetworkTopology_DedicatedServer = 3,
};

}
