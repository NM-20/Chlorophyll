#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1A44
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422D5900
   Address:          00000001430C68C8
   Default Value:    00000001428585B0
*/
#pragma pack(push, 8)
struct ServerGameManagerRestartLevelRequestMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerGameManagerRestartLevelRequestMessage) == 48);

}
