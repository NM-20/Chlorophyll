#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BoneComponentData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleHealthZoneData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CA28
   RuntimeId:        1084
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D15
   VfTable:          0000000142267698
   Address (Base):   00000001430D0C20
*/
#pragma pack(push, 16)
class ChildComponentData : public BoneComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform AlignTransform; /* 0x0070 */
  FB_HANDLE(class SoundAsset) SoundEffect; /* 0x00B0 */
  FB_HANDLE(class MovingBodyData) MovingBody; /* 0x00B8 */
  VehicleHealthZoneData HealthZone; /* 0x00C0 */
  FB_FLOAT32 SoundEffectStartRpm; /* 0x00E0 */
  FB_FLOAT32 SoundEffectStopRpm; /* 0x00E4 */
  FB_HANDLE(class AlignmentData) AlignmentSettings; /* 0x00E8 */
  FB_BOOLEAN WorldSpacePositionLock; /* 0x00F0 */
  FB_BOOLEAN EnableAlignToCamera; /* 0x00F1 */
  char pad_00F2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(ChildComponentData) == 256);

}
