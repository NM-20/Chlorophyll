#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B80
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240AF8
   Address:          00000001430CB3E8
   Default Value:    0000000142842D10
*/
#pragma pack(push, 8)
struct NetworkUnSpawnCustomizationMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NetworkUnSpawnCustomizationMessage) == 72);

}
