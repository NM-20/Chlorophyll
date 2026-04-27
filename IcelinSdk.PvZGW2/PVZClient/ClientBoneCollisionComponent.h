#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BEC
   TypeInfo Kind:    ClassInfo
   ClassId:          018C
   VfTable:          0000000000000000
   Address (Base):   00000001430D20B0
*/
class ClientBoneCollisionComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0100];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0138 */

static_assert(sizeof(ClientBoneCollisionComponent) == 312);

}
