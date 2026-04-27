#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AB5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232A20
   Address:          00000001430CC028
   Default Value:    000000014283FE78
*/
#pragma pack(push, 8)
struct ClientCharacterLocalPlayerDeletedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientCharacterLocalPlayerDeletedMessage) == 56);

}
