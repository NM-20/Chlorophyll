#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0255
   VfTable:          0000000000000000
   Address (Base):   0000000143126970
*/
class GroundHeightEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x2030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x2050 */

static_assert(sizeof(GroundHeightEntity) == 8272);

}
