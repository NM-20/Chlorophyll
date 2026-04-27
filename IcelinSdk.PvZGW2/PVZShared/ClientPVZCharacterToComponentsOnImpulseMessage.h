#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20C4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142354198
   Address:          00000001430C4E28
   Default Value:    0000000142862D38
*/
#pragma pack(push, 8)
struct ClientPVZCharacterToComponentsOnImpulseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterToComponentsOnImpulseMessage) == 56);

}
