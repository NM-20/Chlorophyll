#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/ModelAnimationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D0F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03CC
   VfTable:          0000000000000000
   Address (Base):   00000001431391B0
*/
class ServerModelAnimationEntity : public ModelAnimationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerModelAnimationEntity) == 120);

}
