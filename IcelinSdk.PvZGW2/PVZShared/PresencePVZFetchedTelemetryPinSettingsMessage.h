#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2923
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236DEB0
   Address:          00000001430C1C48
   Default Value:    000000014286FBB0
*/
#pragma pack(push, 8)
struct PresencePVZFetchedTelemetryPinSettingsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresencePVZFetchedTelemetryPinSettingsMessage) == 48);

}
