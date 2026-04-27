#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A6A
   TypeInfo Kind:    ClassInfo
   ClassId:          0163
   VfTable:          0000000000000000
   Address (Base):   00000001430CDFF0
*/
class ClientBoneComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientBoneComponent) == 56);

}
