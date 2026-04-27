#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/FollowFormation.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850548
   RuntimeId:        1391
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA740
   Default Value:    0000000142850560
*/
#pragma pack(push, 4)
struct FollowMoverSpec
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FollowFormation formation; /* 0x0000 */
  FB_FLOAT32 followDistance; /* 0x0004 */
  FB_FLOAT32 arcSpread; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(FollowMoverSpec) == 12);

}
