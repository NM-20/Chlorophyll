#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/StateNodeEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D7A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A6
   VfTable:          0000000000000000
   Address (Base):   0000000143128310
*/
class StateNodeEntity : public StateNodeEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(StateNodeEntity) == 144);

}
