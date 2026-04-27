#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23BB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F208
   Address:          00000001430C3D28
   Default Value:    00000001428679A0
*/
#pragma pack(push, 8)
struct PresenceHostMigrationSetGardenDamageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PresenceHostMigrationSetGardenDamageMessage) == 80);

}
