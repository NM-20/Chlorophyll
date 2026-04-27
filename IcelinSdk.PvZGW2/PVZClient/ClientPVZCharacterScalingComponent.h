#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF6
   TypeInfo Kind:    ClassInfo
   ClassId:          0193
   VfTable:          0000000000000000
   Address (Base):   00000001430D2060
*/
class ClientPVZCharacterScalingComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ClientPVZCharacterScalingComponent) == 152);

}
