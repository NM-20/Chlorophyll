#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E4A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0487
   VfTable:          0000000000000000
   Address (Base):   000000014311FCF0
*/
class ZoneStreamerEntity : public ZoneStreamerEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0268[0x02A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0508 */

static_assert(sizeof(ZoneStreamerEntity) == 1288);

}
