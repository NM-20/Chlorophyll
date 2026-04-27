#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26D4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423668F8
   Address:          00000001430C2F28
   Default Value:    000000014286C230
*/
#pragma pack(push, 8)
struct ServerBuffKilledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerBuffKilledMessage) == 72);

}
