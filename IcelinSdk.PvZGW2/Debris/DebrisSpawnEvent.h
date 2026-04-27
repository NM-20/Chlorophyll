#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0649
   TypeInfo Kind:    ClassInfo
   ClassId:          05D0
   VfTable:          0000000000000000
   Address (Base):   0000000143124BC0
*/
class DebrisSpawnEvent : public EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(DebrisSpawnEvent) == 32);

}
