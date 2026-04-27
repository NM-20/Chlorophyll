#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAreaTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F42
   TypeInfo Kind:    EntityClassInfo
   ClassId:          048F
   VfTable:          0000000000000000
   Address (Base):   000000014312C5F0
*/
class ServerPVZAreaTriggerEntity : public PVZAreaTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0310 */

static_assert(sizeof(ServerPVZAreaTriggerEntity) == 784);

}
