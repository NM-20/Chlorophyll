#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        279F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142365FF0
   Address:          00000001430C2E68
   Default Value:    000000014286CFF0
*/
#pragma pack(push, 8)
struct NetworkGameAdministrationPacketMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(NetworkGameAdministrationPacketMessage) == 88);

}
