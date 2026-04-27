#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F33
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DF
   VfTable:          0000000000000000
   Address (Base):   000000014312CE10
*/
class ServerPlayerTransformEntity : public ServerGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ServerPlayerTransformEntity) == 112);

}
