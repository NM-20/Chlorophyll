#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849700
   RuntimeId:        0DB0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C2E
   VfTable:          000000014225FD50
   Address (Base):   00000001430D78D0
*/
#pragma pack(push, 8)
class TeamFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  TeamId Team; /* 0x001C */
  FB_BOOLEAN InvertFilter; /* 0x0020 */
  FB_BOOLEAN GenerateEventForEveryMatchingTeamMember; /* 0x0021 */
  FB_BOOLEAN GetTeamFromPlayerEvent; /* 0x0022 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TeamFilterEntityData) == 40);

}
