#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ClientPresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AC7
   TypeInfo Kind:    ClassInfo
   ClassId:          0014
   VfTable:          0000000000000000
   Address (Base):   0000000143121100
*/
class ClientPrivilegeService : public ClientPresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(ClientPrivilegeService) == 80);

}
