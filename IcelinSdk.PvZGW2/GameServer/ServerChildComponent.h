#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerBoneComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C6D
   TypeInfo Kind:    ClassInfo
   ClassId:          01B8
   VfTable:          0000000000000000
   Address (Base):   00000001430BD290
*/
class ServerChildComponent : public ServerBoneComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0110];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ServerChildComponent) == 320);

}
