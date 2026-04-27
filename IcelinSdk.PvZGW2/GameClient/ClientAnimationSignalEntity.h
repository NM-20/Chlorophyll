#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09F8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04CE
   VfTable:          0000000000000000
   Address (Base):   000000014313D8F0
*/
class ClientAnimationSignalEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ClientAnimationSignalEntity) == 160);

}
