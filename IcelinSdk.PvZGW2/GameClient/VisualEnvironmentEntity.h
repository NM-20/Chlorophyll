#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09E9
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D7
   VfTable:          0000000000000000
   Address (Base):   0000000143127910
*/
class VisualEnvironmentEntity : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0380];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03E0 */

static_assert(sizeof(VisualEnvironmentEntity) == 992);

}
