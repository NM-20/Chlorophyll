#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        190E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03A6
   VfTable:          0000000000000000
   Address (Base):   0000000143137950
*/
class OriginalLocalLightEntity : public LocalLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(OriginalLocalLightEntity) == 272);

}
