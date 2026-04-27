#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientChildComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B0B
   TypeInfo Kind:    ClassInfo
   ClassId:          0165
   VfTable:          0000000000000000
   Address (Base):   00000001430D29C0
*/
class ClientChildBarrelComponent : public ClientChildComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ClientChildBarrelComponent) == 240);

}
