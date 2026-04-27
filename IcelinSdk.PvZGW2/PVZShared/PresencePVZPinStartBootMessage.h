#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2924
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236DED0
   Address:          00000001430C1C28
   Default Value:    000000014286FBE0
*/
#pragma pack(push, 8)
struct PresencePVZPinStartBootMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresencePVZPinStartBootMessage) == 48);

}
