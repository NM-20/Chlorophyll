#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ACC
   TypeInfo Kind:    ClassInfo
   ClassId:          0006
   VfTable:          0000000000000000
   Address (Base):   00000001430B5B90
*/
class BlazePresenceBackend : public PresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0050[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */

static_assert(sizeof(BlazePresenceBackend) == 248);

}
