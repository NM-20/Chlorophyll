#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CAE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0364
   VfTable:          0000000000000000
   Address (Base):   000000014312FBB0
*/
class ClientPVZPlayerIteratorEntity : public PVZPlayerIteratorEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientPVZPlayerIteratorEntity) == 56);

}
