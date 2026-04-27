#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1251
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142272C18
   Address:          00000001430C8E08
   Default Value:    000000014284EC50
*/
#pragma pack(push, 8)
struct NetworkPlayerSelectedCustomizationAssetMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkPlayerSelectedCustomizationAssetMessage) == 80);

}
