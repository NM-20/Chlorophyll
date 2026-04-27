#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1A4A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D5920
   Address:          00000001430C6808
   Default Value:    00000001428586D0
*/
#pragma pack(push, 8)
struct ServerGameManagerAddQueuedPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerGameManagerAddQueuedPlayerMessage) == 72);

}
