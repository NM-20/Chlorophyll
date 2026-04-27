#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ConsumableGroup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849F38
   RuntimeId:        0E2A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C96E8
   Default Value:    0000000142BA4830
*/
#pragma pack(push, 4)
struct PersistenceConsumableMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  ConsumableGroup Group; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(PersistenceConsumableMapping) == 4);

}
