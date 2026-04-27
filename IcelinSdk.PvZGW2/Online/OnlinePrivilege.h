#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857F78
   RuntimeId:        19C0
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C6FA8
*/
enum OnlinePrivilege
{
  OnlinePrivilege_Unknown = 0,
  OnlinePrivilege_CommunicationVoiceIngame = 1,
  OnlinePrivilege_CommunicationVoiceSkype = 2,
  OnlinePrivilege_VideoCommunications = 3,
  OnlinePrivilege_Communications = 4,
  OnlinePrivilege_UserCreatedContent = 5,
  OnlinePrivilege_MultiplayerSessionsRealtime = 6,
  OnlinePrivilege_MultiplayerSessionsAsync = 7,
  OnlinePrivilege_EAAccess = 8,
  OnlinePrivilege_Count = 9,
};

}
