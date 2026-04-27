#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ExplosionPackTrigger.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DAB8
   RuntimeId:        2836
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118C
   VfTable:          000000014236F090
   Address (Base):   00000001430F5830
*/
#pragma pack(push, 8)
class ExplosionPackInfantryTrigger : public ExplosionPackTrigger
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackInfantryTrigger) == 16);

}
