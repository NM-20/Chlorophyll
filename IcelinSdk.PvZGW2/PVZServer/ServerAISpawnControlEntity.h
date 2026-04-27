#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F09
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0260
   VfTable:          0000000000000000
   Address (Base):   000000014312E350
*/
class ServerAISpawnControlEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0B20];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0B40 */

static_assert(sizeof(ServerAISpawnControlEntity) == 2880);

}
