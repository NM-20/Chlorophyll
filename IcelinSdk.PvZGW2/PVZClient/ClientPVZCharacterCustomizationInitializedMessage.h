#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B51
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBEC0
   Address:          00000001430C6488
   Default Value:    00000001428599C8
*/
#pragma pack(push, 8)
struct ClientPVZCharacterCustomizationInitializedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterCustomizationInitializedMessage) == 48);

}
