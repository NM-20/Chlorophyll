#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20CF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353FD8
   Address:          00000001430C4DC8
   Default Value:    0000000142862E78
*/
#pragma pack(push, 8)
struct PVZHealthModuleToComponentsStartSpawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZHealthModuleToComponentsStartSpawnMessage) == 48);

}
