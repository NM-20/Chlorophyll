#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        289A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E590
   Address:          00000001430C28C8
   Default Value:    000000014286E830
*/
#pragma pack(push, 8)
struct ClientPlayerStatsDownloadCompletedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerStatsDownloadCompletedMessage) == 64);

}
