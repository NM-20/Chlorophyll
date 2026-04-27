#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD6
   TypeInfo Kind:    ClassInfo
   ClassId:          0008
   VfTable:          0000000000000000
   Address (Base):   00000001430DE1E0
*/
class OriginPresenceBackend : public PresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0050[0x00E8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0138 */

static_assert(sizeof(OriginPresenceBackend) == 312);

}
