#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863D48
   RuntimeId:        2171
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA1
   VfTable:          00000001423531A0
   Address (Base):   00000001430E6760
*/
#pragma pack(push, 16)
class PVZCharacterSoundComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform AntTrajectory; /* 0x0070 */
  LinearTransform AntBoneTransform; /* 0x00B0 */
  FB_FLOAT32 WalkVelocityThreshold; /* 0x00F0 */
  FB_FLOAT32 RunVelocityThreshold; /* 0x00F4 */
  FB_FLOAT32 WalkPeriod; /* 0x00F8 */
  FB_FLOAT32 RunPeriod; /* 0x00FC */
  FB_FLOAT32 AntBoneOffset; /* 0x0100 */
  char pad_0104[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterSoundComponentData) == 272);

}
