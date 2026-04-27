#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C4A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03E6
   VfTable:          0000000000000000
   Address (Base):   0000000143132F90
*/
class UICostumeDataFilterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(UICostumeDataFilterEntity) == 256);

}
