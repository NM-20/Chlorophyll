#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A1E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02BB
   VfTable:          0000000000000000
   Address (Base):   00000001431230E0
*/
class ClientPhysicsEntityWithPoseProvider : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ClientPhysicsEntityWithPoseProvider) == 128);

}
