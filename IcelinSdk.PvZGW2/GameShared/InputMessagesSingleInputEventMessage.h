#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D2E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142260618
   Address:          00000001430C9868
   Default Value:    0000000142848CC8
*/
#pragma pack(push, 8)
struct InputMessagesSingleInputEventMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(InputMessagesSingleInputEventMessage) == 56);

}
