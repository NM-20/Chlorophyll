#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07B3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A7
   VfTable:          0000000000000000
   Address (Base):   000000014313EA70
*/
class LocalWindForceSamplerEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x00C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(LocalWindForceSamplerEntity) == 240);

}
