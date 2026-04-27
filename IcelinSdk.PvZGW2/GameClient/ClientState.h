#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283EF10
   RuntimeId:        0A6E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CC8A8
*/
enum ClientState
{
  ClientState_WaitingForStaticBundleLoad = 0,
  ClientState_ShuttingDown               = 15,
  ClientState_ConnectToServer            = 14,
  ClientState_LeaveIngame                = 13,
  ClientState_Ingame                     = 12,
  ClientState_WaitingForGhosts           = 11,
  ClientState_LevelLinked                = 10,
  ClientState_WaitingForLevelLink        = 9,
  ClientState_WaitingForLevelLoaded      = 8,
  ClientState_StartLoadingLevel          = 7,
  ClientState_WaitingForLevel            = 6,
  ClientState_StartServer                = 5,
  ClientState_Startup                    = 4,
  ClientState_WaitingForUnload           = 3,
  ClientState_LostConnection             = 2,
  ClientState_LoadProfileOptions         = 1,
  ClientState_Shutdown                   = 16,
  ClientState_None                       = 17,
};

}
