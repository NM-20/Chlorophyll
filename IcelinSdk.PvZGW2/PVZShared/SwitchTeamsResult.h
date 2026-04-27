#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142867098
   RuntimeId:        23A0
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C4088
*/
enum SwitchTeamsResult
{
  SwitchTeamsResult_Success = -1,
  SwitchTeamsResult_FailedUnbalanced = 0,
  SwitchTeamsResult_FailedTooSoon = 1,
  SwitchTeamsResult_FailedMustBeDead = 2,
  SwitchTeamsResult_FailedTeamFull = 3,
  SwitchTeamsResult_FailedDisabled = 4,
  SwitchTeamsResult_FailedSpawning = 5,
};

}
