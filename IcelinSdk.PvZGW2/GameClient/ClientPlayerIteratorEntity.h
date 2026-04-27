#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/PlayerIteratorEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A5C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0296
   VfTable:          0000000000000000
   Address (Base):   000000014313CA90
*/
class ClientPlayerIteratorEntity : public PlayerIteratorEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ClientPlayerIteratorEntity) == 72);

}
