#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F82
   TypeInfo Kind:    ClassInfo
   ClassId:          01F1
   VfTable:          0000000000000000
   Address (Base):   00000001430B7B20
*/
class ServerTauntComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x01D8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0208 */

static_assert(sizeof(ServerTauntComponent) == 520);

}
