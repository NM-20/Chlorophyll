#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865F48
   RuntimeId:        2367
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BC
   VfTable:          0000000142350620
   Address (Base):   00000001430E7BA0
*/
#pragma pack(push, 8)
class TeamCastEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 IntValue; /* 0x001C */
  TeamId TeamIdValue; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TeamCastEntityData) == 40);

}
