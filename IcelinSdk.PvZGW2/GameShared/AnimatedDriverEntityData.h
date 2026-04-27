#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/NormalizeSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CFD8
   RuntimeId:        10CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A41
   VfTable:          0000000142267118
   Address (Base):   00000001430ECDC0
*/
#pragma pack(push, 16)
class AnimatedDriverEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef VehicleSpeed; /* 0x0018 */
  char pad_002C[0x0004];
  LinearTransform InputTransform; /* 0x0030 */
  AntRef VehicleMovementState; /* 0x0070 */
  AntRef VehicleBoost; /* 0x0084 */
  AntRef VehicleBrake; /* 0x0098 */
  FB_FLOAT32 MovementStateStandThreshold; /* 0x00AC */
  NormalizeSettings Yaw; /* 0x00B0 */
  NormalizeSettings Pitch; /* 0x00C8 */
  NormalizeSettings Roll; /* 0x00E0 */
  FB_BOOLEAN DelayAnimationWheelTransform; /* 0x00F8 */
  char pad_00F9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(AnimatedDriverEntityData) == 256);

}
