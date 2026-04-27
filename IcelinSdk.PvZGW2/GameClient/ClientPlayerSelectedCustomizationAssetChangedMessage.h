#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AAA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232AF0
   Address:          00000001430CC188
   Default Value:    000000014283FBC8
*/
#pragma pack(push, 8)
struct ClientPlayerSelectedCustomizationAssetChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerSelectedCustomizationAssetChangedMessage) == 56);

}
