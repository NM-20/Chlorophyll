#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        13EE
   TypeInfo Kind:    ClassInfo
   ClassId:          0138
   VfTable:          0000000000000000
   Address (Base):   00000001430DE3C0
*/
class ClientMoverComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00E8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(ClientMoverComponent) == 288);

}
