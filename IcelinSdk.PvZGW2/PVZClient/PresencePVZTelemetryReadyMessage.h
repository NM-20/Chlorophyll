#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B89
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBD30
   Address:          00000001430C5E68
   Default Value:    0000000142859E40
*/
#pragma pack(push, 8)
struct PresencePVZTelemetryReadyMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresencePVZTelemetryReadyMessage) == 48);

}
