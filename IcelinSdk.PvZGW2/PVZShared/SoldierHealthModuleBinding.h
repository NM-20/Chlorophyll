#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862698
   RuntimeId:        2074
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9640
   Default Value:    0000000142BFE540
*/
#pragma pack(push, 4)
struct SoldierHealthModuleBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef HeadShot; /* 0x0000 */
  AntRef LeftArmHit; /* 0x0014 */
  AntRef RightArmHit; /* 0x0028 */
  AntRef LeftLegHit; /* 0x003C */
  AntRef RightLegHit; /* 0x0050 */
  AntRef OnGround; /* 0x0064 */
  AntRef DeathAnimationTriggered; /* 0x0078 */
  AntRef RandomAnimationIndex; /* 0x008C */
  AntRef Sprinting; /* 0x00A0 */
  AntRef HitLeft; /* 0x00B4 */
  AntRef HitRight; /* 0x00C8 */
  AntRef HitFront; /* 0x00DC */
  AntRef HitBack; /* 0x00F0 */
  AntRef DeathHitDirection; /* 0x0104 */
  AntRef Explosion; /* 0x0118 */
  AntRef Dead; /* 0x012C */
  AntRef Revived; /* 0x0140 */
  AntRef RandomValue; /* 0x0154 */
  AntRef Pose; /* 0x0168 */
  AntRef RightSpeed; /* 0x017C */
  AntRef ForwardSpeed; /* 0x0190 */
  AntRef CriticallyHit; /* 0x01A4 */
  AntRef InteractiveManDown; /* 0x01B8 */
  AntRef Health; /* 0x01CC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */
#pragma pack(pop)

static_assert(sizeof(SoldierHealthModuleBinding) == 480);

}
