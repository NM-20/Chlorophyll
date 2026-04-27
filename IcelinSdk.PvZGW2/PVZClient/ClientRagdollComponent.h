#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF8
   TypeInfo Kind:    ClassInfo
   ClassId:          019B
   VfTable:          0000000000000000
   Address (Base):   00000001430D21A0
*/
class ClientRagdollComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0268];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02A0 */

static_assert(sizeof(ClientRagdollComponent) == 672);

}
