#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F3B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04B1
   VfTable:          0000000000000000
   Address (Base):   000000014312CA50
*/
class ServerPVZPlayerIteratorScoredStatReceivedFilterEntity : public PVZPlayerIteratorFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerPVZPlayerIteratorScoredStatReceivedFilterEntity) == 48);

}
