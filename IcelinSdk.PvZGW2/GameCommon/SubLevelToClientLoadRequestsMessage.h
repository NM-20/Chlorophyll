#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B3A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241460
   Address:          00000001430CBBE8
   Default Value:    0000000142841AC0
*/
#pragma pack(push, 8)
struct SubLevelToClientLoadRequestsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(SubLevelToClientLoadRequestsMessage) == 88);

}
