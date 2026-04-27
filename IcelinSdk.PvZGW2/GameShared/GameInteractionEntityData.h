#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InteractionEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/InteractionEntityType.h>
#include <IcelinSdk.PvZGW2/GameShared/BlinkType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428493C0
   RuntimeId:        0D7C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3C
   VfTable:          00000001422601D0
   Address (Base):   00000001430D7B10
*/
#pragma pack(push, 16)
class GameInteractionEntityData : public InteractionEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DelayBetweenUses; /* 0x0080 */
  ::fb::TeamId TeamId; /* 0x0084 */
  ::fb::TeamId SpectatorTeamId; /* 0x0088 */
  FB_INT32 InputAction; /* 0x008C */
  FB_FLOAT32 HoldToInteractTime; /* 0x0090 */
  InteractionEntityType InteractionEntityType; /* 0x0094 */
  FB_CSTRING InteractionSid; /* 0x0098 */
  BlinkType Blink; /* 0x00A0 */
  char pad_00A4[0x0004];
  FB_CSTRING InteractingSid; /* 0x00A8 */
  FB_CSTRING NameSid; /* 0x00B0 */
  FB_FLOAT32 InteractionVerticalOffset; /* 0x00B8 */
  char pad_00BC[0x0004];
  FB_CSTRING FriendlyTextSid; /* 0x00C0 */
  FB_CSTRING EnemyTextSid; /* 0x00C8 */
  FB_FLOAT32 CapturepointVerticalOffset; /* 0x00D0 */
  char pad_00D4[0x0004];
  FB_CSTRING IconName; /* 0x00D8 */
  FB_HANDLE(class UIWorldIconBehavior) IconBehavior; /* 0x00E0 */
  FB_FLOAT32 TacticalRadius; /* 0x00E8 */
  FB_BOOLEAN ShrinkSnap; /* 0x00EC */
  FB_BOOLEAN ShowAsCapturePoint; /* 0x00ED */
  FB_BOOLEAN FriendlyInteractionEnabled; /* 0x00EE */
  FB_BOOLEAN EnemyInteractionEnabled; /* 0x00EF */
  FB_BOOLEAN ForceSnap; /* 0x00F0 */
  char pad_00F1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(GameInteractionEntityData) == 256);

}
