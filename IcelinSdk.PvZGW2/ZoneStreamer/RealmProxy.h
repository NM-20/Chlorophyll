#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E48
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0488
   VfTable:          0000000000000000
   Address (Base):   0000000143124C10
*/
class RealmProxy : public ZoneStreamerEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0268[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0278 */

static_assert(sizeof(RealmProxy) == 632);

}
