#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AFF8
   RuntimeId:        0F13
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6918
   Default Value:    000000014284B010
*/
#pragma pack(push, 8)
struct HudData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 CrosshairScaleMin; /* 0x0000 */
  FB_FLOAT32 CrosshairScaleMax; /* 0x0004 */
  FB_FLOAT32 CrosshairOpacityMin; /* 0x0008 */
  FB_FLOAT32 CrosshairOpacityMax; /* 0x000C */
  FB_FLOAT32 CrosshairOpacityModifier; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING CrosshairTypeId; /* 0x0018 */
  FB_HANDLE(class CrosshairTypeAsset) CrosshairType; /* 0x0020 */
  FB_HANDLE(class LockingTypeAsset) LockingType; /* 0x0028 */
  FB_CSTRING WeaponClass; /* 0x0030 */
  FB_FLOAT32 LowAmmoWarning; /* 0x0038 */
  FB_FLOAT32 ReloadPrompt; /* 0x003C */
  FB_INT32 RenderTargetIndex; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class UIPartPropertyList) HudPropertyList; /* 0x0048 */
  FB_FLOAT32 SeaLevelAltFreq; /* 0x0050 */
  FB_FLOAT32 CameraShakeModifier; /* 0x0054 */
  FB_CSTRING HudIcon; /* 0x0058 */
  FB_BOOLEAN ShowMinimap; /* 0x0060 */
  FB_BOOLEAN HideAmmo; /* 0x0061 */
  FB_BOOLEAN InfiniteAmmo; /* 0x0062 */
  FB_BOOLEAN HideCrosshairWhenAimOnFriend; /* 0x0063 */
  FB_BOOLEAN UseRenderTarget; /* 0x0064 */
  FB_BOOLEAN UseRangeMeter; /* 0x0065 */
  FB_BOOLEAN UseAimWarning; /* 0x0066 */
  FB_BOOLEAN UsePredictedSight; /* 0x0067 */
  FB_BOOLEAN UseWeaponOrientations; /* 0x0068 */
  FB_BOOLEAN UseVelocityVectorMarker; /* 0x0069 */
  FB_BOOLEAN UseLockingController; /* 0x006A */
  FB_BOOLEAN UseThrust; /* 0x006B */
  FB_BOOLEAN UseGForce; /* 0x006C */
  FB_BOOLEAN UseSkidSlip; /* 0x006D */
  FB_BOOLEAN UseClimbRate; /* 0x006E */
  char pad_006F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(HudData) == 112);

}
