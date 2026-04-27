#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorSorterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F3C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          056F
   VfTable:          0000000000000000
   Address (Base):   000000014312C9B0
*/
class ServerPVZPlayerIteratorScoreSorterEntity : public PVZPlayerIteratorSorterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerPVZPlayerIteratorScoreSorterEntity) == 48);

}
