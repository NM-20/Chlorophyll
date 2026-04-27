#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23BC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F168
   Address:          00000001430C3D08
   Default Value:    00000001428679F0
*/
#pragma pack(push, 8)
struct PresenceHostMigrationGardenDefendedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PresenceHostMigrationGardenDefendedMessage) == 80);

}
