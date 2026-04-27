#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/GameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C4E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DA
   VfTable:          0000000000000000
   Address (Base):   00000001430D8310
*/
class ServerGameComponentEntity : public GameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ServerGameComponentEntity) == 96);

}
