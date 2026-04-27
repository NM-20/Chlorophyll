#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0794
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0483
   VfTable:          0000000000000000
   Address (Base):   000000014313FAB0
*/
class TransformBuilderEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(TransformBuilderEntity) == 136);

}
