#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20C3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142354188
   Address:          00000001430C4E48
   Default Value:    0000000142862D08
*/
#pragma pack(push, 8)
struct PVZCharacterToComponentsOnEnteredSecondaryMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterToComponentsOnEnteredSecondaryMessage) == 48);

}
