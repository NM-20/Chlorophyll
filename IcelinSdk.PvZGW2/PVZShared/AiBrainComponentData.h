#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BaseAIComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointOfInterestInfo.h>
#include <IcelinSdk.PvZGW2/PVZShared/EActorRole.h>
#include <IcelinSdk.PvZGW2/PVZShared/TargetingComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 00000001428731F8
   RuntimeId:        2B92
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5D
   VfTable:          00000001423794E0
   Address (Base):   00000001430D2EF0
*/
#pragma pack(push, 16)
class AiBrainComponentData : public BaseAIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PointOfInterestInfo Interest; /* 0x0080 */
  EActorRole Role; /* 0x00B0 */
  char pad_00B4[0x0004];
  FB_HANDLE(class SensingSettings) SensingSettings; /* 0x00B8 */
  FB_STDARRAY(struct TacticInfo) Tactics; /* 0x00C0 */
  FB_HANDLE(class MovementStyleData) MovementStyles; /* 0x00C8 */
  FB_CSTRING AITypeName; /* 0x00D0 */
  FB_CSTRING CommanderIconName; /* 0x00D8 */
  FB_CSTRING CommanderDeadIconName; /* 0x00E0 */
  TargetingComponentBinding TargetingBinding; /* 0x00E8 */
  FB_STDARRAY(FB_CSTRING) Events; /* 0x0110 */
  FB_BOOLEAN PerformStuckCheck; /* 0x0118 */
  FB_BOOLEAN UseSeperateAimingValues; /* 0x0119 */
  char pad_011A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(AiBrainComponentData) == 288);

}
