#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        27F0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03B5
   VfTable:          0000000000000000
   Address (Base):   000000014312A250
*/
class SwitchPropertyLongStringEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(SwitchPropertyLongStringEntity) == 224);

}
