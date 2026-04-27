#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428744C8
   RuntimeId:        2C56
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B3
   VfTable:          00000001423788E8
   Address (Base):   00000001431042F0
*/
#pragma pack(push, 8)
class InaccuracySettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForcedInaccuracyTime; /* 0x0010 */
  FB_FLOAT32 MinForcedInaccuracyDistance; /* 0x0014 */
  FB_FLOAT32 MaxForcedInaccuracyDistance; /* 0x0018 */
  FB_FLOAT32 ResetWeaponMoveDistance; /* 0x001C */
  FB_FLOAT32 ResetTargetMoveDistance; /* 0x0020 */
  FB_FLOAT32 InnerInaccurateDistance; /* 0x0024 */
  FB_FLOAT32 OuterInaccurateDistance; /* 0x0028 */
  FB_FLOAT32 CloseRangeAccuracyDistance; /* 0x002C */
  FB_FLOAT32 MinAccuracyAtMaxDistance; /* 0x0030 */
  FB_FLOAT32 MaxAccuracyAtMinDistance; /* 0x0034 */
  FB_FLOAT32 StartAccuracyPercentage; /* 0x0038 */
  FB_FLOAT32 FinalAccuracyPercentage; /* 0x003C */
  FB_FLOAT32 AccuracyIncreaseTime; /* 0x0040 */
  FB_BOOLEAN ResetOnReTarget; /* 0x0044 */
  FB_BOOLEAN ForcedInaccuracyToHumansOnly; /* 0x0045 */
  FB_BOOLEAN UseInaccuracyAtCloseRange; /* 0x0046 */
  char pad_0047[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(InaccuracySettings) == 72);

}
