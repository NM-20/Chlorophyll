#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28AD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E460
   Address:          00000001430C26C8
   Default Value:    000000014286EB20
*/
#pragma pack(push, 8)
struct ClientPersistenceAwardChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPersistenceAwardChangedMessage) == 64);

}
