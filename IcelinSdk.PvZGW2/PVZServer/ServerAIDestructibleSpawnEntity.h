#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F06
   TypeInfo Kind:    EntityClassInfo
   ClassId:          025C
   VfTable:          0000000000000000
   Address (Base):   0000000143123680
*/
class ServerAIDestructibleSpawnEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0D80];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0DA0 */

static_assert(sizeof(ServerAIDestructibleSpawnEntity) == 3488);

}
