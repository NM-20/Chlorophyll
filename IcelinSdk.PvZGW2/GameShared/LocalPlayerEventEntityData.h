#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849900
   RuntimeId:        0DD0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09CC
   VfTable:          000000014225F9F0
   Address (Base):   00000001430EDB40
*/
#pragma pack(push, 8)
class LocalPlayerEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  LocalPlayerId LocalPlayerId; /* 0x001C */
  FB_BOOLEAN AllLocalPlayers; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(LocalPlayerEventEntityData) == 40);

}
