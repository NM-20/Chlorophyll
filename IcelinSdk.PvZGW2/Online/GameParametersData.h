#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistenceGameType.h>
#include <IcelinSdk.PvZGW2/Online/GameNetworkTopology.h>
#include <IcelinSdk.PvZGW2/Online/GamePeer2PeerMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858328
   RuntimeId:        1A29
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082C
   VfTable:          00000001422D59D0
   Address (Base):   000000014310CCF0
*/
#pragma pack(push, 8)
class GameParametersData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ServerName; /* 0x0018 */
  PersistenceGameType GameType; /* 0x0020 */
  FB_UINT32 QueueCapacity; /* 0x0024 */
  FB_UINT32 Mod; /* 0x0028 */
  FB_UINT32 MaxSpectators; /* 0x002C */
  FB_UINT32 DefaultMaxPlayers; /* 0x0030 */
  GameNetworkTopology GameTopology; /* 0x0034 */
  GamePeer2PeerMode PeerMode; /* 0x0038 */
  GameNetworkTopology VoipTopology; /* 0x003C */
  FB_STDARRAY(struct GameAttributeData) Attributes; /* 0x0040 */
  FB_REFARRAY(class GameRoleInformation) RoleConfiguration; /* 0x0048 */
  FB_INT32 Teams; /* 0x0050 */
  FB_BOOLEAN OpenToInvites; /* 0x0054 */
  FB_BOOLEAN OpenToMatchmaking; /* 0x0055 */
  FB_BOOLEAN OpenToJoinByPlayer; /* 0x0056 */
  FB_BOOLEAN OpenToBrowsing; /* 0x0057 */
  FB_BOOLEAN Ranked; /* 0x0058 */
  FB_BOOLEAN JoinInProgressSupported; /* 0x0059 */
  FB_BOOLEAN FriendsBypassClosedToJoinByPlayer; /* 0x005A */
  char pad_005B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(GameParametersData) == 96);

}
