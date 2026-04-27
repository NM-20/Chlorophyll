#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C06
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245780
   Address:          00000001430CAA28
   Default Value:    0000000142845EF0
*/
#pragma pack(push, 8)
struct StatDisableMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(StatDisableMessage) == 48);

}
