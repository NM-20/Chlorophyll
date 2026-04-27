#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E6E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423979D0
   Address:          00000001430C0408
   Default Value:    0000000142877220
*/
#pragma pack(push, 8)
struct ZoneStreamerAnnounceMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerAnnounceMessage) == 64);

}
