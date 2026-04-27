#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2223
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423523B8
   Address:          00000001430C4808
   Default Value:    0000000142864990
*/
#pragma pack(push, 8)
struct GlobalEventEntityNetworkedClientPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(GlobalEventEntityNetworkedClientPlayerMessage) == 96);

}
