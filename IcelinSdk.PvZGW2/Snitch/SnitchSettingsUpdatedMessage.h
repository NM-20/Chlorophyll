#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C67
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014238AAF0
   Address:          00000001430C0AA8
   Default Value:    0000000142874820
*/
#pragma pack(push, 8)
struct SnitchSettingsUpdatedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SnitchSettingsUpdatedMessage) == 48);

}
