#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B35
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422414C8
   Address:          00000001430CBC28
   Default Value:    00000001428419C0
*/
#pragma pack(push, 8)
struct SubLevelToClientSubLevelNameMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(SubLevelToClientSubLevelNameMessage) == 88);

}
