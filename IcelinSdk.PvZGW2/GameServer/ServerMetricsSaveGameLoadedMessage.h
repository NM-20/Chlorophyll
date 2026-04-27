#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C18
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245670
   Address:          00000001430CA7E8
   Default Value:    00000001428430F8
*/
#pragma pack(push, 8)
struct ServerMetricsSaveGameLoadedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerMetricsSaveGameLoadedMessage) == 56);

}
