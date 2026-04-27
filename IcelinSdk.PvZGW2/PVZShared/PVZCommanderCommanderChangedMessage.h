#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2111
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353918
   Address:          00000001430C4C68
   Default Value:    00000001428633D0
*/
#pragma pack(push, 8)
struct PVZCommanderCommanderChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderCommanderChangedMessage) == 80);

}
