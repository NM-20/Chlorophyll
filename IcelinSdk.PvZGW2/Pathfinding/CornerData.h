#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Pathfinding/CornerType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428504A0
   RuntimeId:        1389
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8A48
   Default Value:    0000000142BA4D10
*/
#pragma pack(push, 16)
struct CornerData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Pos; /* 0x0000 */
  CornerType CornerType; /* 0x0010 */
  FB_BOOLEAN Goal; /* 0x0014 */
  char pad_0015[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CornerData) == 32);

}
