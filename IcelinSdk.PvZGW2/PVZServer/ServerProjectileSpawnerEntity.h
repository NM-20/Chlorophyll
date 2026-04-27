#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F34
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A6
   VfTable:          0000000000000000
   Address (Base):   0000000143125390
*/
class ServerProjectileSpawnerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0198];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01C0 */

static_assert(sizeof(ServerProjectileSpawnerEntity) == 448);

}
