#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428623F0
   RuntimeId:        204E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5088
   Default Value:    0000000142BB4E04
*/
#pragma pack(push, 1)
struct PlaylistMap
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(PlaylistMap) == 1);

}
