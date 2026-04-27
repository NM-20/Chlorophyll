#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0792
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0408
   VfTable:          0000000000000000
   Address (Base):   000000014313FBF0
*/
class Vec4BuilderEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(Vec4BuilderEntity) == 120);

}
