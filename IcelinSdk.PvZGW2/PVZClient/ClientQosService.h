#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ClientPresenceService.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BB1
   TypeInfo Kind:    ClassInfo
   ClassId:          0013
   VfTable:          0000000000000000
   Address (Base):   00000001431209D0
*/
class ClientQosService : public ClientPresenceService
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientQosService) == 64);

}
