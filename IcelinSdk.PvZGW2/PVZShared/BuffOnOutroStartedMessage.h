#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23CA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234EE68
   Address:          00000001430C3B68
   Default Value:    0000000142867E70
*/
#pragma pack(push, 8)
struct BuffOnOutroStartedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(BuffOnOutroStartedMessage) == 104);

}
