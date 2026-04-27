#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CCD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252BF8
   Address:          00000001430C9B28
   Default Value:    00000001428477D0
*/
#pragma pack(push, 8)
struct ServerGameplaySendOfflineGameReportMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerGameplaySendOfflineGameReportMessage) == 48);

}
