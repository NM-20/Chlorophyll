#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C16
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245650
   Address:          00000001430CA828
   Default Value:    0000000142842EA8
*/
#pragma pack(push, 8)
struct ServerClientConnectionConnectedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerClientConnectionConnectedMessage) == 56);

}
