#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23C9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234EF08
   Address:          00000001430C3B88
   Default Value:    0000000142867E10
*/
#pragma pack(push, 8)
struct PVZNetworkLoadLevelMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkLoadLevelMessage) == 96);

}
