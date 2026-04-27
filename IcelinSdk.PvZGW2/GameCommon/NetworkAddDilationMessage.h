#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B9C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240270
   Address:          00000001430CB088
   Default Value:    0000000142843A00
*/
#pragma pack(push, 8)
struct NetworkAddDilationMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(NetworkAddDilationMessage) == 104);

}
