#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D62
   TypeInfo Kind:    EntityClassInfo
   ClassId:          039C
   VfTable:          0000000000000000
   Address (Base):   00000001431024F0
*/
class UILegacyScreenRenderPropertyEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(UILegacyScreenRenderPropertyEntity) == 56);

}
