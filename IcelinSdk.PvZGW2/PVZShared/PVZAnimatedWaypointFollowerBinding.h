#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428625B8
   RuntimeId:        2066
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B96A0
   Default Value:    0000000142BFE330
*/
#pragma pack(push, 4)
struct PVZAnimatedWaypointFollowerBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef WaypointType; /* 0x0000 */
  AntRef WaypointTime; /* 0x0014 */
  AntRef LeftFootSquish; /* 0x0028 */
  AntRef RightFootSquish; /* 0x003C */
  AntRef LeftFootStomp; /* 0x0050 */
  AntRef RightFootStomp; /* 0x0064 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedWaypointFollowerBinding) == 120);

}
