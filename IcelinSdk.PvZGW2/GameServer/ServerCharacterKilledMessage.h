#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C1D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422455E0
   Address:          00000001430CA748
   Default Value:    00000001428461E0
*/
#pragma pack(push, 8)
struct ServerCharacterKilledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerCharacterKilledMessage) == 72);

}
