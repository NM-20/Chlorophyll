#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AF3
   TypeInfo Kind:    ClassInfo
   ClassId:          015C
   VfTable:          0000000000000000
   Address (Base):   00000001430CDF00
*/
class ClientPlayerEntryComponent : public ClientEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0230[0x0380];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x05B0 */

static_assert(sizeof(ClientPlayerEntryComponent) == 1456);

}
