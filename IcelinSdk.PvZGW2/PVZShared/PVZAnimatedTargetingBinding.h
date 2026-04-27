#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862538
   RuntimeId:        205E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B96C0
   Default Value:    0000000142BFE2E0
*/
#pragma pack(push, 4)
struct PVZAnimatedTargetingBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef TargetYaw; /* 0x0000 */
  AntRef TargetPitch; /* 0x0014 */
  AntRef Aiming; /* 0x0028 */
  AntRef Charging; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedTargetingBinding) == 80);

}
