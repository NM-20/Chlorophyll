#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ClientPresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AC1
   TypeInfo Kind:    ClassInfo
   ClassId:          0015
   VfTable:          0000000000000000
   Address (Base):   0000000143121290
*/
class ClientBlobService : public ClientPresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ClientBlobService) == 32);

}
