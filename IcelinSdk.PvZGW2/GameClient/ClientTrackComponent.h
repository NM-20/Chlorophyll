#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientMeshComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B12
   TypeInfo Kind:    ClassInfo
   ClassId:          0132
   VfTable:          0000000000000000
   Address (Base):   00000001430CF680
*/
class ClientTrackComponent : public ClientMeshComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0110[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(ClientTrackComponent) == 416);

}
