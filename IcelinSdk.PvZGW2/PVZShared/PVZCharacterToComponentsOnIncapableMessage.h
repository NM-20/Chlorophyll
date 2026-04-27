#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20BF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423541D8
   Address:          00000001430C4EC8
   Default Value:    0000000142862C10
*/
#pragma pack(push, 16)
struct PVZCharacterToComponentsOnIncapableMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterToComponentsOnIncapableMessage) == 96);

}
