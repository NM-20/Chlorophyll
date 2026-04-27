#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C44
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0391
   VfTable:          0000000000000000
   Address (Base):   0000000143133350
*/
class ClientUIStatEventEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x5CD8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x5CF8 */

static_assert(sizeof(ClientUIStatEventEntity) == 23800);

}
