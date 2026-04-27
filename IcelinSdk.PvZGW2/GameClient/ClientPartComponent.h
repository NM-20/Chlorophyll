#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A3E
   TypeInfo Kind:    ClassInfo
   ClassId:          01A0
   VfTable:          0000000000000000
   Address (Base):   00000001430B7070
*/
class ClientPartComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */

static_assert(sizeof(ClientPartComponent) == 184);

}
