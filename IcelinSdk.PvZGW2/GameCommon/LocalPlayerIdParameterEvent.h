#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BEB
   TypeInfo Kind:    ClassInfo
   ClassId:          05D6
   VfTable:          0000000000000000
   Address (Base):   00000001430D2830
*/
class LocalPlayerIdParameterEvent : public EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(LocalPlayerIdParameterEvent) == 24);

}
