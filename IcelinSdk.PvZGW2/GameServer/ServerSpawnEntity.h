#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C77
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A8
   VfTable:          0000000000000000
   Address (Base):   00000001430CE310
*/
class ServerSpawnEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0280];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02A8 */

static_assert(sizeof(ServerSpawnEntity) == 680);

}
