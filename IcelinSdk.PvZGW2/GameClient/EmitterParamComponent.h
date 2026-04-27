#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09DF
   TypeInfo Kind:    ClassInfo
   ClassId:          0155
   VfTable:          0000000000000000
   Address (Base):   00000001430DF310
*/
class EmitterParamComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(EmitterParamComponent) == 112);

}
