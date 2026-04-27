#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2220
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142352260
   Address:          00000001430C4868
   Default Value:    0000000142863898
*/
#pragma pack(push, 8)
struct GlobalEventEntityLocalMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(GlobalEventEntityLocalMessage) == 56);

}
