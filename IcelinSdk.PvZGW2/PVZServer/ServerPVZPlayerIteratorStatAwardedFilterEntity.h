#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F3D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04B3
   VfTable:          0000000000000000
   Address (Base):   000000014312C910
*/
class ServerPVZPlayerIteratorStatAwardedFilterEntity : public PVZPlayerIteratorFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerPVZPlayerIteratorStatAwardedFilterEntity) == 48);

}
