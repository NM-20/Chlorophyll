#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A6B
   TypeInfo Kind:    ClassInfo
   ClassId:          0248
   VfTable:          0000000000000000
   Address (Base):   00000001430D2A60
*/
class ClientDynamicModelHealthComponent : public ClientGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientDynamicModelHealthComponent) == 56);

}
