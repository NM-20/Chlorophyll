#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2556
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014235B4B0
   Address:          00000001430C3588
   Default Value:    000000014286A190
*/
#pragma pack(push, 8)
struct PVZUIPopupShowMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPopupShowMessage) == 120);

}
