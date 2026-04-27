#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BBF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0335
   VfTable:          0000000000000000
   Address (Base):   0000000143136730
*/
class ClientAIWaveManagerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0130];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(ClientAIWaveManagerEntity) == 336);

}
