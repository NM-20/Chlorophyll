#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/FiringDispersionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B318
   RuntimeId:        2614
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8A80
   Default Value:    000000014286B330
*/
#pragma pack(push, 4)
struct WeaponDispersion
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FiringDispersionData StandDispersion; /* 0x0000 */
  FiringDispersionData CrouchDispersion; /* 0x001C */
  FiringDispersionData ProneDispersion; /* 0x0038 */
  FB_FLOAT32 JumpDispersionAngle; /* 0x0054 */
  FB_FLOAT32 ProneTransitionDispersionAngle; /* 0x0058 */
  FB_FLOAT32 MoveDispersionAngle; /* 0x005C */
  FB_FLOAT32 MoveZoomedDispersionAngle; /* 0x0060 */
  FB_FLOAT32 DecreasePerSecond; /* 0x0064 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(WeaponDispersion) == 104);

}
