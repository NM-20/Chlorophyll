#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GlobalEventEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F30
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0359
   VfTable:          0000000000000000
   Address (Base):   000000014312CF50
*/
class ServerGlobalEventEntity : public GlobalEventEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerGlobalEventEntity) == 64);

}
