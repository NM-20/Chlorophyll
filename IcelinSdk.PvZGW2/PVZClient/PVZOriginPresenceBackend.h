#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/OriginPresenceBackend.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BB9
   TypeInfo Kind:    ClassInfo
   ClassId:          0009
   VfTable:          0000000000000000
   Address (Base):   0000000143120930
*/
class PVZOriginPresenceBackend : public OriginPresenceBackend
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0138 */

static_assert(sizeof(PVZOriginPresenceBackend) == 312);

}
