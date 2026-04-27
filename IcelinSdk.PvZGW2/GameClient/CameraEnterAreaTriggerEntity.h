#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B04
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0285
   VfTable:          0000000000000000
   Address (Base):   000000014313BF50
*/
class CameraEnterAreaTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(CameraEnterAreaTriggerEntity) == 176);

}
