#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00E6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E5320
   Address:          00000001430CD728
   Default Value:    0000000142833138
*/
#pragma pack(push, 8)
struct CoreCleanupMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CoreCleanupMessage) == 48);

}
