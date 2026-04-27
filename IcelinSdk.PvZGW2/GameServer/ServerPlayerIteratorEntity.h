#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/PlayerIteratorEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CEE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0295
   VfTable:          0000000000000000
   Address (Base):   0000000143139750
*/
class ServerPlayerIteratorEntity : public PlayerIteratorEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerPlayerIteratorEntity) == 72);

}
