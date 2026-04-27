#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EB98
   RuntimeId:        1CFD
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9880
*/
enum AiTargetBehaviorType
{
  AiTargetBehaviorType_Attack = 0,
  AiTargetBehaviorType_Heal = 1,
  AiTargetBehaviorType_Revive = 2,
  AiTargetBehaviorType_Buff = 3,
};

}
