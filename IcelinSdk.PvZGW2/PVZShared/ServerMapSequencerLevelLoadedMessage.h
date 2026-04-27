#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28B2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E550
   Address:          00000001430C2628
   Default Value:    000000014286EC40
*/
#pragma pack(push, 8)
struct ServerMapSequencerLevelLoadedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerMapSequencerLevelLoadedMessage) == 72);

}
