#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C93
   TypeInfo Kind:    ClassInfo
   ClassId:          01B3
   VfTable:          0000000000000000
   Address (Base):   00000001430DDE70
*/
class ClientPVZAnimatedBoneHelperComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ClientPVZAnimatedBoneHelperComponent) == 176);

}
