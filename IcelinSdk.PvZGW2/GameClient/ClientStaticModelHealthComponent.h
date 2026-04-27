#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A44
   TypeInfo Kind:    ClassInfo
   ClassId:          0247
   VfTable:          0000000000000000
   Address (Base):   00000001430DEBE0
*/
class ClientStaticModelHealthComponent : public ClientGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientStaticModelHealthComponent) == 56);

}
