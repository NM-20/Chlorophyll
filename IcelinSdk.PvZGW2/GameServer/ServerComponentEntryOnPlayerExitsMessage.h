#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CA8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252E48
   Address:          00000001430C9FC8
   Default Value:    0000000142846F20
*/
#pragma pack(push, 8)
struct ServerComponentEntryOnPlayerExitsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerComponentEntryOnPlayerExitsMessage) == 72);

}
