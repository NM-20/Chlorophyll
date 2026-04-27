#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/BlazePresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C95
   TypeInfo Kind:    ClassInfo
   ClassId:          0007
   VfTable:          0000000000000000
   Address (Base):   00000001430D1ED0
*/
class PVZBlazePresenceBackend : public BlazePresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00F8[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(PVZBlazePresenceBackend) == 416);

}
