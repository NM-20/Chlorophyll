#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientUIObjectTagComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BC9
   TypeInfo Kind:    ClassInfo
   ClassId:          01B0
   VfTable:          0000000000000000
   Address (Base):   00000001430DE140
*/
class ClientUIWorldObjectTagComponent : public ClientUIObjectTagComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00D0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(ClientUIWorldObjectTagComponent) == 256);

}
