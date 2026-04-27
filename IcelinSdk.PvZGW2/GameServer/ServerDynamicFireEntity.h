#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C67
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DC
   VfTable:          0000000000000000
   Address (Base):   000000014313A6F0
*/
class ServerDynamicFireEntity : public ServerGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x02C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0320 */

static_assert(sizeof(ServerDynamicFireEntity) == 800);

}
