#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20BE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423541C8
   Address:          00000001430C4EE8
   Default Value:    0000000142862BD8
*/
#pragma pack(push, 8)
struct PVZCharacterToComponentsOnCustomizeSoldierMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterToComponentsOnCustomizeSoldierMessage) == 56);

}
