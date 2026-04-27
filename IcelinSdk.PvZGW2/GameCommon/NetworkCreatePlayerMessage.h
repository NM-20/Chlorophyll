#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B89
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240828
   Address:          00000001430CB2C8
   Default Value:    0000000142843130
*/
#pragma pack(push, 8)
struct NetworkCreatePlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(NetworkCreatePlayerMessage) == 88);

}
