#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C85
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04C8
   VfTable:          0000000000000000
   Address (Base):   000000014313A0B0
*/
class ServerCharacterLookAtTriggerEntity : public ServerTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ServerCharacterLookAtTriggerEntity) == 176);

}
