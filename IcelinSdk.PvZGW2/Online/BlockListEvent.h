#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD3
   TypeInfo Kind:    ClassInfo
   ClassId:          0062
   VfTable:          0000000000000000
   Address (Base):   00000001430F3880
*/
class BlockListEvent : public PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x3298];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x32A8 */

static_assert(sizeof(BlockListEvent) == 12968);

}
