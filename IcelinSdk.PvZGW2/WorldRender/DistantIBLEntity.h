#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalIBLEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18FE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05C5
   VfTable:          0000000000000000
   Address (Base):   0000000143138030
*/
class DistantIBLEntity : public LocalIBLEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(DistantIBLEntity) == 224);

}
