#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C19
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245630
   Address:          00000001430CA7C8
   Default Value:    0000000142843188
*/
#pragma pack(push, 8)
struct ServerMetricsSaveGameSavedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerMetricsSaveGameSavedMessage) == 56);

}
