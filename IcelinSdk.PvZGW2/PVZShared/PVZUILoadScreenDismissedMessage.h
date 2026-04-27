#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B2D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BB48
   Address:          00000001430C1448
   Default Value:    0000000142872408
*/
#pragma pack(push, 8)
struct PVZUILoadScreenDismissedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUILoadScreenDismissedMessage) == 56);

}
