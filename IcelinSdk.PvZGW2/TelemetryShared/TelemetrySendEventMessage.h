#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2CA0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014238CB88
   Address:          00000001430C0828
   Default Value:    0000000142874E80
*/
#pragma pack(push, 8)
struct TelemetrySendEventMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySendEventMessage) == 168);

}
