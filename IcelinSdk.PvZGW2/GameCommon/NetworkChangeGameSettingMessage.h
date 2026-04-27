#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B78
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240D28
   Address:          00000001430CB4E8
   Default Value:    0000000142842920
*/
#pragma pack(push, 8)
struct NetworkChangeGameSettingMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkChangeGameSettingMessage) == 80);

}
