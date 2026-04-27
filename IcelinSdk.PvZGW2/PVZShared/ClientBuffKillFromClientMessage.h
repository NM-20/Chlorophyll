#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26D6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142366898
   Address:          00000001430C2EE8
   Default Value:    000000014286C2F0
*/
#pragma pack(push, 8)
struct ClientBuffKillFromClientMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ClientBuffKillFromClientMessage) == 112);

}
