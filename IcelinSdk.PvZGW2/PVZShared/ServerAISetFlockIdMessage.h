#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C36
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423789F8
   Address:          00000001430C0DA8
   Default Value:    0000000142873F30
*/
#pragma pack(push, 8)
struct ServerAISetFlockIdMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerAISetFlockIdMessage) == 80);

}
