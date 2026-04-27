#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/ObjectiveType.h>
#include <IcelinSdk.PvZGW2/GameShared/MessageReciever.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/SquadId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428494C0
   RuntimeId:        0D8C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09FD
   VfTable:          0000000142260070
   Address (Base):   00000001430D0E60
*/
#pragma pack(push, 8)
class ObjectiveEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MissionObjectiveHudData) HudData; /* 0x0018 */
  ObjectiveType ObjectiveType; /* 0x0020 */
  FB_FLOAT32 DisplayTime; /* 0x0024 */
  FB_FLOAT32 DelayTime; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING ObjectiveSid; /* 0x0030 */
  FB_CSTRING ObjectiveBriefSid; /* 0x0038 */
  FB_CSTRING SuccessSid; /* 0x0040 */
  MessageReciever Reciever; /* 0x0048 */
  TeamId TeamId; /* 0x004C */
  SquadId SquadId; /* 0x0050 */
  FB_BOOLEAN Tutorial; /* 0x0054 */
  FB_BOOLEAN RetriggerSuccessOnShowObjective; /* 0x0055 */
  FB_BOOLEAN DisplaySuccess; /* 0x0056 */
  char pad_0057[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ObjectiveEntityData) == 88);

}
