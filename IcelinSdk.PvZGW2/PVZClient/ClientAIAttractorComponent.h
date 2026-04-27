#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BBD
   TypeInfo Kind:    ClassInfo
   ClassId:          0133
   VfTable:          0000000000000000
   Address (Base):   00000001430DE190
*/
class ClientAIAttractorComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ClientAIAttractorComponent) == 144);

}
