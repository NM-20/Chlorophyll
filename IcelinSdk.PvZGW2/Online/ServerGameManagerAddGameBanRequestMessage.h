#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1A46
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D58E0
   Address:          00000001430C6888
   Default Value:    0000000142858610
*/
#pragma pack(push, 8)
struct ServerGameManagerAddGameBanRequestMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerGameManagerAddGameBanRequestMessage) == 64);

}
