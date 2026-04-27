#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B26
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B2
   VfTable:          0000000000000000
   Address (Base):   00000001430BDB70
*/
class GameComponentEntity : public ComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0040[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(GameComponentEntity) == 96);

}
