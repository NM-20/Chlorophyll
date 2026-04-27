#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringHandlerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869A48
   RuntimeId:        24EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E27
   VfTable:          0000000142355A18
   Address (Base):   00000001430F7A50
*/
#pragma pack(push, 8)
class DamageScoringHandlerData : public ScoringHandlerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RepairVehicleLimit; /* 0x0010 */
  FB_FLOAT32 DamageTeamVehicleLimit; /* 0x0014 */
  FB_FLOAT32 TeamHealingLimit; /* 0x0018 */
  FB_FLOAT32 TeamDamageLimit; /* 0x001C */
  FB_FLOAT32 BossKillAssistLimit; /* 0x0020 */
  FB_FLOAT32 BossKillAssistAsKillLimit; /* 0x0024 */
  FB_FLOAT32 BossKillAssistTimeout; /* 0x0028 */
  FB_FLOAT32 KillAssistLimit; /* 0x002C */
  FB_FLOAT32 KillAssistAsKillLimit; /* 0x0030 */
  FB_FLOAT32 KillAssistTimeout; /* 0x0034 */
  FB_FLOAT32 VehicleDestroyAssistLimit; /* 0x0038 */
  FB_FLOAT32 SaviorKillTimeout; /* 0x003C */
  FB_FLOAT32 SaviorDamageLimit; /* 0x0040 */
  FB_FLOAT32 DamageDoneTimeout; /* 0x0044 */
  FB_FLOAT32 DamageDoneMaxValue; /* 0x0048 */
  FB_FLOAT32 HotVehicleTimeout; /* 0x004C */
  FB_FLOAT32 SplashDamageTimeout; /* 0x0050 */
  FB_FLOAT32 MultiDamageTimeout; /* 0x0054 */
  FB_UINT32 MinMultiDamageCount; /* 0x0058 */
  FB_FLOAT32 JustInTimeHealLimit; /* 0x005C */
  FB_FLOAT32 KillWithLowHealthLimit; /* 0x0060 */
  FB_FLOAT32 WeaponKillAssistTimeLimit; /* 0x0064 */
  FB_FLOAT32 KillCelebrationTimeout; /* 0x0068 */
  FB_FLOAT32 KillYDifferenceLimit; /* 0x006C */
  FB_FLOAT32 MultiBuffTimeout; /* 0x0070 */
  FB_UINT32 MinMultiBuffCount; /* 0x0074 */
  FB_FLOAT32 BlockedDamageLimit; /* 0x0078 */
  char pad_007C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DamageScoringHandlerData) == 128);

}
