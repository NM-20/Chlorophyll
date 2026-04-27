#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C0C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04AE
   VfTable:          0000000000000000
   Address (Base):   00000001431353D0
*/
class ClientPVZPlayerIteratorHealthStateFilterEntity : public PVZPlayerIteratorFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientPVZPlayerIteratorHealthStateFilterEntity) == 48);

}
