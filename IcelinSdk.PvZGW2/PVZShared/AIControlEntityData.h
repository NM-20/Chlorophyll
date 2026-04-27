#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428739B8
   RuntimeId:        2C06
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE0
   VfTable:          0000000142379068
   Address (Base):   00000001430E1420
*/
#pragma pack(push, 8)
class AIControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RoundTimeLeft; /* 0x0018 */
  TeamId AIAttackerTeamId; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AIControlEntityData) == 32);

}
