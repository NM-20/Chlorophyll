#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B8C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240738
   Address:          00000001430CB268
   Default Value:    00000001428432D0
*/
#pragma pack(push, 8)
struct NetworkSettingsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(NetworkSettingsMessage) == 128);

}
