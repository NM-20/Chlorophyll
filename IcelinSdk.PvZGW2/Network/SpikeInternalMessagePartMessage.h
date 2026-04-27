#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        137D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014227B7C8
   Address:          00000001430C8A68
   Default Value:    0000000142850270
*/
#pragma pack(push, 8)
struct SpikeInternalMessagePartMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SpikeInternalMessagePartMessage) == 128);

}
