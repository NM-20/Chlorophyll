#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B1C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BCF8
   Address:          00000001430C1648
   Default Value:    0000000142872230
*/
#pragma pack(push, 8)
struct UIPVZShowObjectiveMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(UIPVZShowObjectiveMessage) == 120);

}
