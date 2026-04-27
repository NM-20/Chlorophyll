#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1A41
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D5970
   Address:          00000001430C6908
   Default Value:    0000000142858540
*/
#pragma pack(push, 8)
struct ServerGameManagerPlayerJoiningQueueMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerGameManagerPlayerJoiningQueueMessage) == 64);

}
