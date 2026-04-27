#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientReflectionVolumeComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A40
   TypeInfo Kind:    ClassInfo
   ClassId:          0142
   VfTable:          0000000000000000
   Address (Base):   00000001430DECD0
*/
class ClientSphereReflectionVolumeComponent : public ClientReflectionVolumeComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientSphereReflectionVolumeComponent) == 64);

}
