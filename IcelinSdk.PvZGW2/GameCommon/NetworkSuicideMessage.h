#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B93
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240590
   Address:          00000001430CB1A8
   Default Value:    00000001428435F0
*/
#pragma pack(push, 8)
struct NetworkSuicideMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NetworkSuicideMessage) == 72);

}
