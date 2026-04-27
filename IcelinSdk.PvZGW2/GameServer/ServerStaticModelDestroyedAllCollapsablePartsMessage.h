#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CB9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252D38
   Address:          00000001430C9DA8
   Default Value:    0000000142847410
*/
#pragma pack(push, 16)
struct ServerStaticModelDestroyedAllCollapsablePartsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(ServerStaticModelDestroyedAllCollapsablePartsMessage) == 176);

}
