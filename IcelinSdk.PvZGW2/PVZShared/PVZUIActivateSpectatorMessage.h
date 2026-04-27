#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B27
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BB68
   Address:          00000001430C14E8
   Default Value:    0000000142872710
*/
#pragma pack(push, 8)
struct PVZUIActivateSpectatorMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZUIActivateSpectatorMessage) == 64);

}
