#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1A3F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D5950
   Address:          00000001430C6948
   Default Value:    0000000142858490
*/
#pragma pack(push, 8)
struct ServerGameManagerPlayerJoinCompleteMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerGameManagerPlayerJoinCompleteMessage) == 48);

}
