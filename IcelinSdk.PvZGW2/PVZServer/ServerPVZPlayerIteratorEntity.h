#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F5D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0363
   VfTable:          0000000000000000
   Address (Base):   000000014312B5B0
*/
class ServerPVZPlayerIteratorEntity : public PVZPlayerIteratorEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ServerPVZPlayerIteratorEntity) == 56);

}
