#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointOfInterestInfo.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/BlinkType.h>
#include <IcelinSdk.PvZGW2/PVZShared/GnomeKeyId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864848
   RuntimeId:        2215
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5D
   VfTable:          0000000142352510
   Address (Base):   00000001430D3DF0
*/
#pragma pack(push, 16)
class PVZGameInteractionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PointOfInterestInfo Interest; /* 0x0060 */
  FB_FLOAT32 UseWithinRadius; /* 0x0090 */
  FB_FLOAT32 UseWithinAngle; /* 0x0094 */
  FB_FLOAT32 DisplayWithinRadius; /* 0x0098 */
  TeamId TeamId; /* 0x009C */
  FB_INT32 InputAction; /* 0x00A0 */
  FB_FLOAT32 HoldToInteractTime; /* 0x00A4 */
  BlinkType Blink; /* 0x00A8 */
  char pad_00AC[0x0004];
  FB_CSTRING InteractionSid; /* 0x00B0 */
  FB_CSTRING NameSid; /* 0x00B8 */
  FB_CSTRING InteractingSid; /* 0x00C0 */
  FB_CSTRING FriendlyTextSid; /* 0x00C8 */
  FB_CSTRING EnemyTextSid; /* 0x00D0 */
  FB_CSTRING ID; /* 0x00D8 */
  FB_REFARRAY(class CharacterCustomizationAsset) AllowableCustomizations; /* 0x00E0 */
  FB_FLOAT32 PostInteractionDelay; /* 0x00E8 */
  FB_UINT32 StarCost; /* 0x00EC */
  FB_HANDLE(class ConsumableData) StarConsumableData; /* 0x00F0 */
  FB_UINT32 RainbowStarCost; /* 0x00F8 */
  char pad_00FC[0x0004];
  FB_HANDLE(class ConsumableData) RainbowStarConsumableData; /* 0x0100 */
  GnomeKeyId GnomeKeyColor; /* 0x0108 */
  char pad_010C[0x0004];
  FB_CSTRING KillSwitchIdentifier; /* 0x0110 */
  FB_CSTRING KillSwitchDialogStringIdentifier; /* 0x0118 */
  FB_FLOAT32 ExtraInteractionWeight; /* 0x0120 */
  char pad_0124[0x0004];
  FB_HANDLE(class SoundAsset) TimedInteractionSound; /* 0x0128 */
  FB_BOOLEAN Enabled; /* 0x0130 */
  FB_BOOLEAN TestIfOccluded; /* 0x0131 */
  FB_BOOLEAN ShrinkSnap; /* 0x0132 */
  FB_BOOLEAN ShowAction; /* 0x0133 */
  FB_BOOLEAN FriendlyInteractionEnabled; /* 0x0134 */
  FB_BOOLEAN EnemyInteractionEnabled; /* 0x0135 */
  FB_BOOLEAN EnabledOnlyForHost; /* 0x0136 */
  FB_BOOLEAN OnlyEnabledForLocalPlayer; /* 0x0137 */
  char pad_0138[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(PVZGameInteractionEntityData) == 320);

}
