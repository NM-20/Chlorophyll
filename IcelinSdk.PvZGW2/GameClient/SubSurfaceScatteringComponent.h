#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09D2
   TypeInfo Kind:    ClassInfo
   ClassId:          014D
   VfTable:          0000000000000000
   Address (Base):   00000001430DF720
*/
class SubSurfaceScatteringComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x01C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0200 */

static_assert(sizeof(SubSurfaceScatteringComponent) == 512);

}
