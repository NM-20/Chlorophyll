#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C83
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0305
   VfTable:          0000000000000000
   Address (Base):   000000014313A150
*/
class ServerPlayerTakeOverTriggerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerPlayerTakeOverTriggerEntity) == 72);

}
