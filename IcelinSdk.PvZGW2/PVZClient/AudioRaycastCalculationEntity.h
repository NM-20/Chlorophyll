#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C05
   TypeInfo Kind:    EntityClassInfo
   ClassId:          047A
   VfTable:          0000000000000000
   Address (Base):   0000000143135830
*/
class AudioRaycastCalculationEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0CB0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0CD0 */

static_assert(sizeof(AudioRaycastCalculationEntity) == 3280);

}
