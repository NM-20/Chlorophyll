#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A38
   TypeInfo Kind:    ClassInfo
   ClassId:          0243
   VfTable:          0000000000000000
   Address (Base):   00000001430F3FB0
*/
class ClientControllableHealthComponent : public ClientGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ClientControllableHealthComponent) == 72);

}
