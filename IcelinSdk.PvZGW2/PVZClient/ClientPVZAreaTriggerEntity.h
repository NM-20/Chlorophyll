#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAreaTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C13
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0490
   VfTable:          0000000000000000
   Address (Base):   0000000143134F70
*/
class ClientPVZAreaTriggerEntity : public PVZAreaTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0310 */

static_assert(sizeof(ClientPVZAreaTriggerEntity) == 784);

}
