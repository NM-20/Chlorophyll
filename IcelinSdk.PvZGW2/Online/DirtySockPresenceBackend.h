#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ACD
   TypeInfo Kind:    ClassInfo
   ClassId:          0005
   VfTable:          0000000000000000
   Address (Base):   00000001430CDC80
*/
class DirtySockPresenceBackend : public PresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0050[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(DirtySockPresenceBackend) == 144);

}
