#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B25
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B998
   Address:          00000001430C1528
   Default Value:    00000001428725F0
*/
#pragma pack(push, 8)
struct PVZUITeamReviveCalloutMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZUITeamReviveCalloutMessage) == 88);

}
