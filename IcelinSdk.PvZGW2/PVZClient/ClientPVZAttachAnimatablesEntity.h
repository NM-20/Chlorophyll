#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BC0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          037B
   VfTable:          0000000000000000
   Address (Base):   0000000143136690
*/
class ClientPVZAttachAnimatablesEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ClientPVZAttachAnimatablesEntity) == 160);

}
