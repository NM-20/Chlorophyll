#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07B4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          029F
   VfTable:          0000000000000000
   Address (Base):   000000014313E9D0
*/
class LocalWindForceSphereEntity : public LocalWindForceEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00E0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(LocalWindForceSphereEntity) == 240);

}
