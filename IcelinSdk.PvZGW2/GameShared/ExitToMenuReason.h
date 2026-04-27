#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A9A0
   RuntimeId:        0EBB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C9568
*/
enum ExitToMenuReason
{
  ExitToMenuReason_None = 0,
  ExitToMenuReason_GuestSignOut = 23,
  ExitToMenuReason_OriginNotLoaded = 24,
  ExitToMenuReason_KickedByFairFight = 25,
  ExitToMenuReason_ServerFull = 26,
  ExitToMenuReason_TimedOut = 27,
  ExitToMenuReason_ConnectFailed = 28,
  ExitToMenuReason_KickedFromQueue = 29,
  ExitToMenuReason_PlayerRemoveTimedOut = 30,
  ExitToMenuReason_PlayerRemovePoorQuality = 31,
  ExitToMenuReason_PlayerRemovedConnLost = 32,
  ExitToMenuReason_PlayerRemovedBlazeserverConnLost = 33,
  ExitToMenuReason_PlayerRemovedMigrationFailed = 34,
  ExitToMenuReason_PlayerRemovedGameDestroyed = 35,
  ExitToMenuReason_PlayerRemovedQueueFailed = 36,
  ExitToMenuReason_PlayerRemovedExternalSessionFailed = 37,
  ExitToMenuReason_PersistenceDownloadFailed = 38,
  ExitToMenuReason_ClientInactivity = 39,
  ExitToMenuReason_GameOver = 22,
  ExitToMenuReason_WantToConnectToOnline = 21,
  ExitToMenuReason_ESportsMatchWarmupTimedOut = 20,
  ExitToMenuReason_ESportsMatchWalkover = 19,
  ExitToMenuReason_UserDisconnected = 1,
  ExitToMenuReason_DisconnectedFromServer = 2,
  ExitToMenuReason_UnableToConnectToServer = 3,
  ExitToMenuReason_ClientDisconnected = 4,
  ExitToMenuReason_FirstPartyConnectionFailed = 5,
  ExitToMenuReason_MissingContent = 6,
  ExitToMenuReason_TeamKills = 7,
  ExitToMenuReason_KickedByAdmin = 8,
  ExitToMenuReason_TrialExpired = 40,
  ExitToMenuReason_Banned = 9,
  ExitToMenuReason_KickedOutServerFull = 11,
  ExitToMenuReason_ESportsMatchStarting = 12,
  ExitToMenuReason_NotInESportsRosters = 13,
  ExitToMenuReason_ESportsMatchEnding = 14,
  ExitToMenuReason_VirtualServerExpired = 15,
  ExitToMenuReason_VirtualServerRecreate = 16,
  ExitToMenuReason_ESportsTeamFull = 17,
  ExitToMenuReason_ESportsMatchAborted = 18,
  ExitToMenuReason_InteractivityTimeout = 10,
  ExitToMenuReason_TrialUpgraded = 41,
};

}
