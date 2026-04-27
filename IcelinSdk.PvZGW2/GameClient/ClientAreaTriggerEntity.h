#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B05
   TypeInfo Kind:    EntityClassInfo
   ClassId:          054C
   VfTable:          0000000000000000
   Address (Base):   000000014313BEB0
*/
class ClientAreaTriggerEntity : public ClientTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x00D8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ClientAreaTriggerEntity) == 320);

}
