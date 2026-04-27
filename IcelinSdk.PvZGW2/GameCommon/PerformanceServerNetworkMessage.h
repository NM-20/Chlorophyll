#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B50
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422411F8
   Address:          00000001430CB968
   Default Value:    0000000142841E28
*/
#pragma pack(push, 8)
struct PerformanceServerNetworkMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PerformanceServerNetworkMessage) == 56);

}
