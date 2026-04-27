#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B360
   RuntimeId:        0F3D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CD
   VfTable:          0000000142260C90
   Address (Base):   00000001431135F0
*/
#pragma pack(push, 8)
class InputConfigurationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntryInputActionMapsData) DefaultInputConceptDefinition; /* 0x0018 */
  FB_STDARRAY(enum InputConceptIdentifiers) DefaultExclusiveInputConcepts; /* 0x0020 */
  FB_HANDLE(class EntryInputActionBindingsData) EntryInputActionBindings; /* 0x0028 */
  FB_STDARRAY(struct EditableActionMap) UserConfigurableActionMaps; /* 0x0030 */
  FB_HANDLE(class UIInputActionDataAsset) UIInputActions; /* 0x0038 */
  FB_INT32 TogglePoseAction; /* 0x0040 */
  FB_INT32 CrouchAction; /* 0x0044 */
  FB_INT32 CrouchAndHoldAction; /* 0x0048 */
  FB_INT32 PickupInteractionAction; /* 0x004C */
  FB_INT32 PickupInteractionActionKeyboard; /* 0x0050 */
  FB_FLOAT32 SprintReleaseTime; /* 0x0054 */
  FB_FLOAT32 ThrottleInputRequiredForSprint; /* 0x0058 */
  FB_FLOAT32 VehicleBoostIsToggleMinInput; /* 0x005C */
  FB_FLOAT32 EnterVehicleHoldTime; /* 0x0060 */
  char pad_0064[0x0004];
  FB_STDARRAY(enum PoseTransition) FiringDisablingTransitions; /* 0x0068 */
  FB_FLOAT32 MinAbilityInputDelay; /* 0x0070 */
  FB_BOOLEAN ReverseInputConceptExclusion; /* 0x0074 */
  FB_BOOLEAN ProneToStandOnJump; /* 0x0075 */
  FB_BOOLEAN StandAutomaticallyIfSprinting; /* 0x0076 */
  FB_BOOLEAN DisableCrouch; /* 0x0077 */
  FB_BOOLEAN DisableProne; /* 0x0078 */
  FB_BOOLEAN DisableCrawlingWhileFiring; /* 0x0079 */
  FB_BOOLEAN DisableCrawlingWhileReloading; /* 0x007A */
  FB_BOOLEAN DisableFiringWhileDeployingBipod; /* 0x007B */
  FB_BOOLEAN DisableFiringWhileJumping; /* 0x007C */
  FB_BOOLEAN DisableSprintingWhileReloading; /* 0x007D */
  FB_BOOLEAN EnableSprintToCrouchTransition; /* 0x007E */
  FB_BOOLEAN StopSprintingWhenReleasingThrottle; /* 0x007F */
  FB_BOOLEAN StopSprintingWhenReleasingSprint; /* 0x0080 */
  FB_BOOLEAN WaitForSprintReleaseBeforeSprintAgain; /* 0x0081 */
  FB_BOOLEAN VehicleBoostIsToggle; /* 0x0082 */
  FB_BOOLEAN InputCurvesEnabled; /* 0x0083 */
  char pad_0084[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(InputConfigurationAsset) == 136);

}
