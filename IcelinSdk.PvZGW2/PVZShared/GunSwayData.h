#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSwayData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayStandData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayCrouchProneData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayStanceTransition.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayStanceZoomModifierData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E2B0
   RuntimeId:        2876
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD7
   VfTable:          000000014236E768
   Address (Base):   00000001430F5950
*/
#pragma pack(push, 8)
class GunSwayData : public WeaponSwayData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GunSwayStandData Stand; /* 0x0010 */
  GunSwayCrouchProneData Crouch; /* 0x0128 */
  GunSwayCrouchProneData Prone; /* 0x01C0 */
  GunSwayStanceTransition ProneToCrouch; /* 0x0258 */
  GunSwayStanceTransition ProneToStand; /* 0x026C */
  GunSwayStanceTransition CrouchToProne; /* 0x0280 */
  GunSwayStanceTransition CrouchToStand; /* 0x0294 */
  GunSwayStanceTransition StandToProne; /* 0x02A8 */
  GunSwayStanceTransition StandToCrouch; /* 0x02BC */
  GunSwayStanceZoomModifierData SuppressionModifierUnzoomed; /* 0x02D0 */
  GunSwayStanceZoomModifierData SuppressionModifierZoomed; /* 0x0314 */
  FB_STDARRAY(struct GunSwayModifierUnlock) ModifierUnlocks; /* 0x0358 */
  FB_FLOAT32 DeviationScaleFactorZoom; /* 0x0360 */
  FB_FLOAT32 GameplayDeviationScaleFactorZoom; /* 0x0364 */
  FB_FLOAT32 DeviationScaleFactorNoZoom; /* 0x0368 */
  FB_FLOAT32 GameplayDeviationScaleFactorNoZoom; /* 0x036C */
  FB_FLOAT32 ShootingRecoilDecreaseScale; /* 0x0370 */
  FB_FLOAT32 FirstShotRecoilMultiplier; /* 0x0374 */
  FB_HANDLE(class CameraRecoilData) CameraRecoil; /* 0x0378 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0380 */
#pragma pack(pop)

static_assert(sizeof(GunSwayData) == 896);

}
