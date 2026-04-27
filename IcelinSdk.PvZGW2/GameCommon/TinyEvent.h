#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142841D60
   RuntimeId:        0B44
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CBAC8
*/
enum TinyEvent
{
  TinyEvent_AckTimeSyncDone = 1,
  TinyEvent_AckLevelLinked = 2,
  TinyEvent_AckLevelRestarted = 3,
  TinyEvent_AckEnterPatchRecvState = 4,
  TinyEvent_AckAuthentication = 5,
  TinyEvent_NackAuthentication = 6,
  TinyEvent_AckExitLevel = 7,
  TinyEvent_CmdLinkLevel = 8,
  TinyEvent_CmdEnterPatchRecvState = 9,
  TinyEvent_CmdExitLevel = 10,
  TinyEvent_CmdContinueLevel = 11,
  TinyEvent_StatControllableRubberbanding = 12,
  TinyEvent_StatWorldRubberbanding = 13,
};

}
