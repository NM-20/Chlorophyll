#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09EF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          055C
   VfTable:          0000000000000000
   Address (Base):   000000014313DAD0
*/
class InternalDestroyMeshEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0300];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0320 */

static_assert(sizeof(InternalDestroyMeshEntity) == 800);

}
