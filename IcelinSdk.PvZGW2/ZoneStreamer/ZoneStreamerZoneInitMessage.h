#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E71
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423979E0
   Address:          00000001430C03A8
   Default Value:    0000000142877300
*/
#pragma pack(push, 8)
struct ZoneStreamerZoneInitMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerZoneInitMessage) == 72);

}
