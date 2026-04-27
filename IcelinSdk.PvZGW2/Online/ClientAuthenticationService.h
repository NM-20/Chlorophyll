#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ClientPresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ABF
   TypeInfo Kind:    ClassInfo
   ClassId:          0017
   VfTable:          0000000000000000
   Address (Base):   0000000143121330
*/
class ClientAuthenticationService : public ClientPresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ClientAuthenticationService) == 32);

}
