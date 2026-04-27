#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F10
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02FE
   VfTable:          0000000000000000
   Address (Base):   000000014312DEF0
*/
class ServerPointOfInterestEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0158];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(ServerPointOfInterestEntity) == 384);

}
