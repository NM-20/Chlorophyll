#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/HoldAndReleaseData.h>
#include <IcelinSdk.PvZGW2/PVZShared/BoltActionData.h>
#include <IcelinSdk.PvZGW2/PVZShared/RecoilData.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleTriggerData.h>
#include <IcelinSdk.PvZGW2/PVZShared/ReloadLogic.h>
#include <IcelinSdk.PvZGW2/PVZShared/ReloadType.h>
#include <IcelinSdk.PvZGW2/PVZShared/FireLogicType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B048
   RuntimeId:        2608
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8B40
   Default Value:    000000014286B060
*/
#pragma pack(push, 8)
struct FireLogicData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class PunchComboBehaviorData) PunchComboBehavior; /* 0x0000 */
  HoldAndReleaseData HoldAndRelease; /* 0x0008 */
  BoltActionData BoltAction; /* 0x0028 */
  RecoilData Recoil; /* 0x0038 */
  FB_INT32 FireInputAction; /* 0x0060 */
  FB_INT32 ReloadInputAction; /* 0x0064 */
  FB_INT32 CycleFireModeInputAction; /* 0x0068 */
  RumbleTriggerData TriggerDetonateRumble; /* 0x006C */
  FB_FLOAT32 TriggerPullWeight; /* 0x0078 */
  FB_FLOAT32 RateOfFire; /* 0x007C */
  FB_FLOAT32 RateOfFireForBurst; /* 0x0080 */
  FB_FLOAT32 RateOfFireIncreasePerAutomaticShot; /* 0x0084 */
  FB_FLOAT32 RateOfFireIncreaseMaximum; /* 0x0088 */
  FB_FLOAT32 ClientFireRateMultiplier; /* 0x008C */
  FB_FLOAT32 ReloadDelay; /* 0x0090 */
  FB_FLOAT32 ReloadTime; /* 0x0094 */
  FB_FLOAT32 ReloadTimeMultiplier; /* 0x0098 */
  FB_FLOAT32 FirstReloadTimeOverride; /* 0x009C */
  FB_STDARRAY(FB_FLOAT32) ReloadTimerArray; /* 0x00A0 */
  FB_FLOAT32 ReloadTimeBulletsLeft; /* 0x00A8 */
  FB_FLOAT32 ReloadThreshold; /* 0x00AC */
  FB_FLOAT32 PreFireDelay; /* 0x00B0 */
  FB_FLOAT32 AutomaticDelay; /* 0x00B4 */
  ReloadLogic ReloadLogic; /* 0x00B8 */
  ReloadType ReloadType; /* 0x00BC */
  FireLogicType FireLogicType; /* 0x00C0 */
  char pad_00C4[0x0004];
  FB_STDARRAY(enum FireLogicType) FireLogicTypeArray; /* 0x00C8 */
  FB_FLOAT32 AutomaticFirePrimingTime; /* 0x00D0 */
  FB_INT32 PrimingFireInputAction; /* 0x00D4 */
  FB_BOOLEAN AlternateFireAndDetonate; /* 0x00D8 */
  FB_BOOLEAN HoldOffReloadUntilFireRelease; /* 0x00D9 */
  FB_BOOLEAN HoldOffReloadUntilZoomRelease; /* 0x00DA */
  FB_BOOLEAN ForceReloadActionOnFireTrigger; /* 0x00DB */
  FB_BOOLEAN AlwaysAutoReload; /* 0x00DC */
  char pad_00DD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(FireLogicData) == 224);

}
