#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863BE8
   RuntimeId:        215B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4A68
   Default Value:    0000000142BFE9E8
*/
#pragma pack(push, 8)
struct PVZShieldState
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class ObjectBlueprint) Shield; /* 0x0000 */
  FB_FLOAT32 HealthThreshold; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZShieldState) == 16);

}
