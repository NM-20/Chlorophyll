#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B50
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBEB0
   Address:          00000001430C64A8
   Default Value:    0000000142859990
*/
#pragma pack(push, 8)
struct ClientPVZCharacterRevivedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterRevivedMessage) == 56);

}
