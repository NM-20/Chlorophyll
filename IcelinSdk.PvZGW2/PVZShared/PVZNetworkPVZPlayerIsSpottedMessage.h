#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F3E8
   Address:          00000001430C3C68
   Default Value:    0000000142867B80
*/
#pragma pack(push, 8)
struct PVZNetworkPVZPlayerIsSpottedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkPVZPlayerIsSpottedMessage) == 88);

}
