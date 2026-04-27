#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientReflectionVolumeComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A41
   TypeInfo Kind:    ClassInfo
   ClassId:          0141
   VfTable:          0000000000000000
   Address (Base):   00000001430DEC80
*/
class ClientBoxReflectionVolumeComponent : public ClientReflectionVolumeComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientBoxReflectionVolumeComponent) == 64);

}
