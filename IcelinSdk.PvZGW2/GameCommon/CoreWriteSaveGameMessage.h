#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B65
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241058
   Address:          00000001430CB6E8
   Default Value:    0000000142842410
*/
#pragma pack(push, 8)
struct CoreWriteSaveGameMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(CoreWriteSaveGameMessage) == 88);

}
