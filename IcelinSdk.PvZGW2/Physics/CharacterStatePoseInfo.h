#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseType.h>
#include <IcelinSdk.PvZGW2/Physics/SpeedModifierData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851620
   RuntimeId:        1486
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDA
   VfTable:          000000014227F460
   Address (Base):   000000014310F150
*/
#pragma pack(push, 8)
class CharacterStatePoseInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CharacterPoseType PoseType; /* 0x0010 */
  FB_FLOAT32 Velocity; /* 0x0014 */
  FB_FLOAT32 AccelerationGain; /* 0x0018 */
  FB_FLOAT32 DecelerationGain; /* 0x001C */
  FB_FLOAT32 DirectionChangeAccelerationGain; /* 0x0020 */
  FB_FLOAT32 DirectionChangeThreshold; /* 0x0024 */
  FB_FLOAT32 SprintGain; /* 0x0028 */
  FB_FLOAT32 SprintMultiplier; /* 0x002C */
  SpeedModifierData SpeedModifier; /* 0x0030 */
  FB_FLOAT32 ShallowWaterMultiplier; /* 0x0040 */
  FB_BOOLEAN ForceDecelerationOverMaxSpeed; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(CharacterStatePoseInfo) == 72);

}
