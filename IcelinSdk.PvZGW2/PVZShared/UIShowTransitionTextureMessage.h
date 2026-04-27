#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B34
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B778
   Address:          00000001430C1368
   Default Value:    0000000142872978
*/
#pragma pack(push, 8)
struct UIShowTransitionTextureMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIShowTransitionTextureMessage) == 48);

}
