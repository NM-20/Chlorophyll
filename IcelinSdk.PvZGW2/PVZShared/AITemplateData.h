#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameBehaviourTemplateData.h>
#include <IcelinSdk.PvZGW2/PVZShared/AttackRange.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873808
   RuntimeId:        2BF0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07AF
   VfTable:          00000001423791A0
   Address (Base):   00000001430BD420
*/
#pragma pack(push, 8)
class AITemplateData : public GameBehaviourTemplateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TauntMinRandomWaitTime; /* 0x0018 */
  FB_FLOAT32 TauntMaxRandomWaitTime; /* 0x001C */
  FB_FLOAT32 TimeUntilUnseenIsLost; /* 0x0020 */
  AttackRange PreferedRange; /* 0x0024 */
  FB_BOOLEAN WeaponTriggersHighJump; /* 0x0028 */
  FB_BOOLEAN PreferedSquadLeader; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AITemplateData) == 48);

}
