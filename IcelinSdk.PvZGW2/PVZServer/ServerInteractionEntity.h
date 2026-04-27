#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F32
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A2
   VfTable:          0000000000000000
   Address (Base):   0000000143125250
*/
class ServerInteractionEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x01F8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */

static_assert(sizeof(ServerInteractionEntity) == 544);

}
