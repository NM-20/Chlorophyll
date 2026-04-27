#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B28
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BB58
   Address:          00000001430C14C8
   Default Value:    0000000142872750
*/
#pragma pack(push, 8)
struct PVZUIBytevaultNoRecordMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUIBytevaultNoRecordMessage) == 48);

}
