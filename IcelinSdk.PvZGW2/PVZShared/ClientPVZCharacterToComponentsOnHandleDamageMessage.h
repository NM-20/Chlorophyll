#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20C5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142354168
   Address:          00000001430C4E08
   Default Value:    0000000142862D70
*/
#pragma pack(push, 16)
struct ClientPVZCharacterToComponentsOnHandleDamageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterToComponentsOnHandleDamageMessage) == 80);

}
