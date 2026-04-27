#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B02
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0308
   VfTable:          0000000000000000
   Address (Base):   00000001431023B0
*/
class ClientSpawnEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0138];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */

static_assert(sizeof(ClientSpawnEntity) == 352);

}
