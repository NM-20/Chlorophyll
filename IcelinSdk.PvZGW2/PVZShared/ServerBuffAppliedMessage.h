#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26D3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423668E8
   Address:          00000001430C2F48
   Default Value:    000000014286C1D0
*/
#pragma pack(push, 8)
struct ServerBuffAppliedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerBuffAppliedMessage) == 72);

}
