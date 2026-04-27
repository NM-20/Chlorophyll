#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AA3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232B40
   Address:          00000001430CC268
   Default Value:    000000014283FAB0
*/
#pragma pack(push, 8)
struct ClientPlayerConnectMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerConnectMessage) == 64);

}
