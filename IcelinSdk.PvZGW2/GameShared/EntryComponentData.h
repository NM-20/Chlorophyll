#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryClass.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryComponentHudData.h>
#include <IcelinSdk.PvZGW2/GameShared/EntrySpottingSettings.h>
#include <IcelinSdk.PvZGW2/GameShared/PoseConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E128
   RuntimeId:        11BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8D
   VfTable:          0000000142273420
   Address (Base):   00000001430ECBE0
*/
#pragma pack(push, 16)
class EntryComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ClearPathToExitPointStartOffset; /* 0x0070 */
  Vec3 SoldierOffset; /* 0x0080 */
  EntryClass EntryClass; /* 0x0090 */
  char pad_0094[0x0004];
  FB_HANDLE(class GameAIEntryData) AIData; /* 0x0098 */
  FB_HANDLE(class EntryInputActionMapsData) InputConceptDefinition; /* 0x00A0 */
  FB_HANDLE(class InputActionMappingsData) InputMapping; /* 0x00A8 */
  FB_REFARRAY(class InputCurveData) InputCurves; /* 0x00B0 */
  EntryComponentHudData HudData; /* 0x00B8 */
  FB_INT32 EntryOrderNumber; /* 0x00C4 */
  FB_FLOAT32 EnterImpulse; /* 0x00C8 */
  FB_FLOAT32 EntryRadius; /* 0x00CC */
  FB_FLOAT32 SoldierTransitionInvisbleTime; /* 0x00D0 */
  EntrySpottingSettings EntrySpottingSettings; /* 0x00D4 */
  FB_INT32 TriggerEventOnKey; /* 0x00D8 */
  FB_BOOLEAN ForbiddenForHuman; /* 0x00DC */
  FB_BOOLEAN IsAllowedToExitInAir; /* 0x00DD */
  FB_BOOLEAN IsShielded; /* 0x00DE */
  FB_BOOLEAN LockSoldierAimingToEntry; /* 0x00DF */
  FB_BOOLEAN ShowSoldierInEntry; /* 0x00E0 */
  FB_BOOLEAN Show1pSoldierInEntry; /* 0x00E1 */
  FB_BOOLEAN ShowSoldierWeaponInEntry; /* 0x00E2 */
  FB_BOOLEAN Show1pSoldierInEntryForPlayerOnly; /* 0x00E3 */
  FB_BOOLEAN Show3pSoldierWeaponInEntry; /* 0x00E4 */
  FB_BOOLEAN ShowSoldierGearInEntry; /* 0x00E5 */
  PoseConstraintsData PoseConstraints; /* 0x00E6 */
  FB_BOOLEAN AllowRagdollFromEntry; /* 0x00E9 */
  char pad_00EA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(EntryComponentData) == 240);

}
