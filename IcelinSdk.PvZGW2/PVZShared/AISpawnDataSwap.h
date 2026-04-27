#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428739D8
   RuntimeId:        2C08
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0F68
   Default Value:    0000000142BB5D10
*/
#pragma pack(push, 8)
struct AISpawnDataSwap
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AISpawnData) Original; /* 0x0000 */
  FB_HANDLE(class AISpawnData) Replacement; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AISpawnDataSwap) == 16);

}
