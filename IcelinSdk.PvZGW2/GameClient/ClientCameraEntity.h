#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCameraEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A03
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0582
   VfTable:          0000000000000000
   Address (Base):   0000000143123180
*/
class ClientCameraEntity : public ClientCameraEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientCameraEntity) == 104);

}
