#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientPVZVehicleEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF9
   TypeInfo Kind:    ClassInfo
   ClassId:          015F
   VfTable:          0000000000000000
   Address (Base):   00000001430DE050
*/
class ClientRemoteEntryComponent : public ClientPVZVehicleEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_06F0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0700 */

static_assert(sizeof(ClientRemoteEntryComponent) == 1792);

}
