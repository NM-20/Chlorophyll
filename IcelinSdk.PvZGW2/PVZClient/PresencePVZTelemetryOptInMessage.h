#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B8A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBD40
   Address:          00000001430C5E48
   Default Value:    0000000142859D08
*/
#pragma pack(push, 8)
struct PresencePVZTelemetryOptInMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PresencePVZTelemetryOptInMessage) == 56);

}
