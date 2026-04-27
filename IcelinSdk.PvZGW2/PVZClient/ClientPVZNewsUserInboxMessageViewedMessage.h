#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B52
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBE10
   Address:          00000001430C6468
   Default Value:    0000000142859A30
*/
#pragma pack(push, 8)
struct ClientPVZNewsUserInboxMessageViewedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZNewsUserInboxMessageViewedMessage) == 64);

}
