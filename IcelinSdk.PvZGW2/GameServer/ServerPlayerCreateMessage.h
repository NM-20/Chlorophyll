#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C22
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422455D0
   Address:          00000001430CA6A8
   Default Value:    00000001428463C0
*/
#pragma pack(push, 8)
struct ServerPlayerCreateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerCreateMessage) == 72);

}
