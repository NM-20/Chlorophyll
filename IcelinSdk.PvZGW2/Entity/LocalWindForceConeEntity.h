#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07B1
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A1
   VfTable:          0000000000000000
   Address (Base):   000000014313EB10
*/
class LocalWindForceConeEntity : public LocalWindForceEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00E0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(LocalWindForceConeEntity) == 272);

}
