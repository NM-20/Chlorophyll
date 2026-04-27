#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B73
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240E68
   Address:          00000001430CB568
   Default Value:    0000000142842770
*/
#pragma pack(push, 8)
struct NetworkLoadLevelMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(NetworkLoadLevelMessage) == 168);

}
