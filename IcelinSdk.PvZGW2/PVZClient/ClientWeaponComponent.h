#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientBoneComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C77
   TypeInfo Kind:    ClassInfo
   ClassId:          0166
   VfTable:          0000000000000000
   Address (Base):   00000001430CEFF0
*/
class ClientWeaponComponent : public ClientBoneComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00F0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0128 */

static_assert(sizeof(ClientWeaponComponent) == 296);

}
