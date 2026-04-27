#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850088
   RuntimeId:        136D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8AA8
*/
enum SecureReason
{
  SecureReason_Ok = 0,
  SecureReason_VirtualServerRecreate = 29,
  SecureReason_ESportsTeamFull = 30,
  SecureReason_ESportsMatchAborted = 31,
  SecureReason_ESportsMatchWalkover = 32,
  SecureReason_ESportsMatchWarmupTimedOut = 33,
  SecureReason_NotAllowedToSpectate = 34,
  SecureReason_NoSpectateSlotAvailable = 35,
  SecureReason_InvalidSpectateJoin = 36,
  SecureReason_KickedViaFairFight = 37,
  SecureReason_KickedCommanderOnLeave = 38,
  SecureReason_KickedCommanderAfterMutiny = 39,
  SecureReason_ServerMaintenance = 40,
  SecureReason_PlayerRemoveTimedOut = 41,
  SecureReason_PlayerRemovePoorQuality = 42,
  SecureReason_PlayerRemovedConnLost = 43,
  SecureReason_PlayerRemovedBlazeserverConnLost = 44,
  SecureReason_PlayerRemovedMigrationFailed = 45,
  SecureReason_PlayerRemovedGameDestroyed = 46,
  SecureReason_PlayerRemovedQueueFailed = 47,
  SecureReason_PlayerRemovedExternalSessionFailed = 48,
  SecureReason_HostDisbandedGroup = 49,
  SecureReason_PersistenceDownloadFailed = 50,
  SecureReason_ClientInactivity = 51,
  SecureReason_VirtualServerExpired = 28,
  SecureReason_ESportsMatchEnding = 27,
  SecureReason_NotInESportsRosters = 26,
  SecureReason_ESportsMatchStarting = 25,
  SecureReason_WrongProtocolVersion = 1,
  SecureReason_WrongTitleVersion = 2,
  SecureReason_ServerFull = 3,
  SecureReason_KickedOut = 4,
  SecureReason_Banned = 5,
  SecureReason_GenericError = 6,
  SecureReason_WrongPassword = 7,
  SecureReason_KickedOutDemoOver = 8,
  SecureReason_RankRestricted = 9,
  SecureReason_ConfigurationNotAllowed = 10,
  SecureReason_ServerReclaimed = 11,
  SecureReason_TrialExpired = 52,
  SecureReason_MissingContent = 12,
  SecureReason_TimedOut = 14,
  SecureReason_ConnectFailed = 15,
  SecureReason_NoReply = 16,
  SecureReason_AcceptFailed = 17,
  SecureReason_MismatchingContent = 18,
  SecureReason_InteractivityTimeout = 19,
  SecureReason_KickedFromQueue = 20,
  SecureReason_TeamKills = 21,
  SecureReason_KickedByAdmin = 22,
  SecureReason_KickedViaPunkBuster = 23,
  SecureReason_KickedOutServerFull = 24,
  SecureReason_NotVerified = 13,
  SecureReason_TrialUpgraded = 53,
};

}
