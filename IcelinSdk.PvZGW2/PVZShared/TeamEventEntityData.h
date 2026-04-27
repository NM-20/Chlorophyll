#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428659F8
   RuntimeId:        2315
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A75
   VfTable:          0000000142351030
   Address (Base):   00000001430D44B0
*/
#pragma pack(push, 8)
class TeamEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  TeamId Team; /* 0x001C */
  FB_BOOLEAN InvertLogic; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TeamEventEntityData) == 40);

}
