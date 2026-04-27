#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C0F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          051F
   VfTable:          0000000000000000
   Address (Base):   00000001431351F0
*/
class ClientBangerTriggerFilterEntity : public TriggerFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientBangerTriggerFilterEntity) == 56);

}
