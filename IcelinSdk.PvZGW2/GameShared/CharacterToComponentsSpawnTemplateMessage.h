#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0F80
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142268798
   Address:          00000001430C9388
   Default Value:    000000014284B7C0
*/
#pragma pack(push, 8)
struct CharacterToComponentsSpawnTemplateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CharacterToComponentsSpawnTemplateMessage) == 64);

}
