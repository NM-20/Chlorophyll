#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AAF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232A80
   Address:          00000001430CC0E8
   Default Value:    000000014283FD10
*/
#pragma pack(push, 8)
struct ClientControllableSpawnDoneMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientControllableSpawnDoneMessage) == 56);

}
