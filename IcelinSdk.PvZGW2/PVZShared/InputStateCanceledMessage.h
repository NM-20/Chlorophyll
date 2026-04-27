#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2888
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E640
   Address:          00000001430C2B08
   Default Value:    000000014286D0E8
*/
#pragma pack(push, 8)
struct InputStateCanceledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(InputStateCanceledMessage) == 56);

}
