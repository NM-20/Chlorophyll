#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AAB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232AC0
   Address:          00000001430CC168
   Default Value:    000000014283FC40
*/
#pragma pack(push, 8)
struct ClientPlayerUnlockStateChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerUnlockStateChangedMessage) == 48);

}
