#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428583E8
   RuntimeId:        1A33
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C69E8
*/
enum PresencePrivilege
{
  PresencePrivilege_Unknown = 0,
  PresencePrivilege_MultiplayerSessionsAsync = 26,
  PresencePrivilege_UnsafeProgramming = 25,
  PresencePrivilege_ContentAuthor = 24,
  PresencePrivilege_Presence = 23,
  PresencePrivilege_ProfileViewing = 22,
  PresencePrivilege_PurchaseContent = 21,
  PresencePrivilege_SocialNetworkSharing = 20,
  PresencePrivilege_GameDVR = 19,
  PresencePrivilege_PremiumVideo = 18,
  PresencePrivilege_SubscriptionContent = 17,
  PresencePrivilege_InternetBrowser = 16,
  PresencePrivilege_PremiumContent = 15,
  PresencePrivilege_OnlineAccess = 27,
  PresencePrivilege_CloudSavedGames = 14,
  PresencePrivilege_CloudGamingManageSession = 12,
  PresencePrivilege_MultiplayerParties = 11,
  PresencePrivilege_ShareKinectContent = 10,
  PresencePrivilege_ViewFriendsList = 9,
  PresencePrivilege_FitnessUpload = 8,
  PresencePrivilege_DownloadFreeContent = 7,
  PresencePrivilege_MultiplayerSessionsRealtime = 6,
  PresencePrivilege_UserCreatedContent = 5,
  PresencePrivilege_Communications = 4,
  PresencePrivilege_VideoCommunications = 3,
  PresencePrivilege_CommunicationVoiceSkype = 2,
  PresencePrivilege_CommunicationVoiceIngame = 1,
  PresencePrivilege_CloudGamingJoinSession = 13,
  PresencePrivilege_EAAccess = 28,
};

}
