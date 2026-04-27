#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPartComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AFF
   TypeInfo Kind:    ClassInfo
   ClassId:          01A1
   VfTable:          0000000000000000
   Address (Base):   00000001430BF540
*/
class ClientChassisComponent : public ClientPartComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00B8[0x0418];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04D0 */

static_assert(sizeof(ClientChassisComponent) == 1232);

}
