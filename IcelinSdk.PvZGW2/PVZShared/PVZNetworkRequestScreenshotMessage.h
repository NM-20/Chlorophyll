#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23A7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F7F8
   Address:          00000001430C3FA8
   Default Value:    00000001428671F0
*/
#pragma pack(push, 8)
struct PVZNetworkRequestScreenshotMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkRequestScreenshotMessage) == 96);

}
