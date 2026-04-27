#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ECB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02AC
   VfTable:          0000000000000000
   Address (Base):   000000014312EDF0
*/
class ServerPVZInteractionEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x01F8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */

static_assert(sizeof(ServerPVZInteractionEntity) == 544);

}
