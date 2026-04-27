#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AC6
   TypeInfo Kind:    ClassInfo
   ClassId:          000D
   VfTable:          0000000000000000
   Address (Base):   00000001430B7020
*/
class ClientPresenceService : public PresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ClientPresenceService) == 32);

}
