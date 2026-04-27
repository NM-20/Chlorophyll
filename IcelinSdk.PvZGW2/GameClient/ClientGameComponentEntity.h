#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/GameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A1A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B3
   VfTable:          0000000000000000
   Address (Base):   00000001430CEC30
*/
class ClientGameComponentEntity : public GameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ClientGameComponentEntity) == 96);

}
