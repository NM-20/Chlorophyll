#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1199
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142273658
   Address:          00000001430C9008
   Default Value:    000000014284DEA8
*/
#pragma pack(push, 8)
struct CharacterToComponentsOnKilledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CharacterToComponentsOnKilledMessage) == 48);

}
