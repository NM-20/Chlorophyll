#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/KillAllPlayerEnum.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849340
   RuntimeId:        0D74
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9C
   VfTable:          0000000142260208
   Address (Base):   00000001430EE2C0
*/
#pragma pack(push, 8)
class KillAllEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId Team; /* 0x0018 */
  KillAllPlayerEnum KillPlayers; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(KillAllEntityData) == 32);

}
