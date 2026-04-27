#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        19A0
   TypeInfo Kind:    ClassInfo
   ClassId:          000A
   VfTable:          0000000000000000
   Address (Base):   000000014311ED00
*/
class NickelPresenceBackend : public PresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0050[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(NickelPresenceBackend) == 128);

}
