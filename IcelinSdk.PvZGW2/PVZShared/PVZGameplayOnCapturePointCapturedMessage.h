#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28C1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E430
   Address:          00000001430C2448
   Default Value:    000000014286F030
*/
#pragma pack(push, 8)
struct PVZGameplayOnCapturePointCapturedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZGameplayOnCapturePointCapturedMessage) == 48);

}
