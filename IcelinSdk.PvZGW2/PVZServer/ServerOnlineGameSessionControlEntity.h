#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EB5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04FD
   VfTable:          0000000000000000
   Address (Base):   000000014312F390
*/
class ServerOnlineGameSessionControlEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerOnlineGameSessionControlEntity) == 48);

}
