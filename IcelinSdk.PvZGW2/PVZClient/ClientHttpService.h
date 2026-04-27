#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ClientPresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BB0
   TypeInfo Kind:    ClassInfo
   ClassId:          0010
   VfTable:          0000000000000000
   Address (Base):   0000000143120A20
*/
class ClientHttpService : public ClientPresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ClientHttpService) == 160);

}
