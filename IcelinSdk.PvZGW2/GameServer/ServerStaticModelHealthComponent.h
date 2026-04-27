#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D06
   TypeInfo Kind:    ClassInfo
   ClassId:          023E
   VfTable:          0000000000000000
   Address (Base):   00000001430DE500
*/
class ServerStaticModelHealthComponent : public ServerGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ServerStaticModelHealthComponent) == 56);

}
