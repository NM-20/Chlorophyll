#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        27E8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04D9
   VfTable:          0000000000000000
   Address (Base):   000000014312A6B0
*/
class SelectEnumerationEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0878];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0898 */

static_assert(sizeof(SelectEnumerationEntity) == 2200);

}
