#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizeCharacterData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSlot.h>
#include <IcelinSdk.PvZGW2/PVZShared/BoolOverrideValue.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862E40
   RuntimeId:        20CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FE
   VfTable:          0000000142354050
   Address (Base):   00000001430DA7F0
*/
#pragma pack(push, 8)
class CustomizePVZCharacterData : public CustomizeCharacterData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UnlockWeaponAndSlot) Weapons; /* 0x0040 */
  WeaponSlot ActiveSlot; /* 0x0048 */
  BoolOverrideValue OverrideIsHealable; /* 0x004C */
  FB_STDARRAY(FB_FLOAT32) OverrideReviveHealthMultipliers; /* 0x0050 */
  FB_UINT32 OverrideUIObjectTagId; /* 0x0058 */
  char pad_005C[0x0004];
  FB_HANDLE(class AntEnumeration) CustomizedAnimation; /* 0x0060 */
  FB_FLOAT32 OverrideSpawnTime; /* 0x0068 */
  FB_FLOAT32 OverrideSpawnInputRestrictionTime; /* 0x006C */
  FB_REFARRAY(class PVZDismembermentUnlockAsset) Dismemberment; /* 0x0070 */
  FB_HANDLE(class PVZShieldUnlockAsset) Shield; /* 0x0078 */
  FB_FLOAT32 ShieldHealth; /* 0x0080 */
  char pad_0084[0x0004];
  FB_HANDLE(class AntEnumeration) ShieldAnimation; /* 0x0088 */
  FB_REFARRAY(class PVZAttachmentUnlockAsset) Attachments; /* 0x0090 */
  FB_FLOAT32 MinScale; /* 0x0098 */
  FB_FLOAT32 MaxScale; /* 0x009C */
  FB_HANDLE(class VoiceOverLabel) VoiceOverLabel; /* 0x00A0 */
  FB_FLOAT32 OverrideMinHitReactionWeight; /* 0x00A8 */
  FB_FLOAT32 OverrideMinHitReactionWeightDamage; /* 0x00AC */
  FB_FLOAT32 OverrideMaxHitReactionWeightDamage; /* 0x00B0 */
  FB_BOOLEAN KeepCurrentActiveSlot; /* 0x00B4 */
  FB_BOOLEAN RemoveAllExistingWeapons; /* 0x00B5 */
  char pad_00B6[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */
#pragma pack(pop)

static_assert(sizeof(CustomizePVZCharacterData) == 184);

}
