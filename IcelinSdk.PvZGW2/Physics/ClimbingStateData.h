#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428517A0
   RuntimeId:        149E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0870
   VfTable:          000000014227F3E0
   Address (Base):   00000001430FBCB0
*/
#pragma pack(push, 8)
class ClimbingStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LateralInputScale; /* 0x0018 */
  FB_FLOAT32 DownAngleLimit; /* 0x001C */
  FB_FLOAT32 DropOffAngle; /* 0x0020 */
  FB_FLOAT32 AttractionVelocity; /* 0x0024 */
  FB_FLOAT32 PushAwayVelocity; /* 0x0028 */
  FB_FLOAT32 ClimbHeightOffset; /* 0x002C */
  FB_FLOAT32 ClimbOffVerticalDistance; /* 0x0030 */
  FB_FLOAT32 ClimbOffVerticalTime; /* 0x0034 */
  FB_FLOAT32 ClimbOffHorizontalDistance; /* 0x0038 */
  FB_FLOAT32 ClimbOffHorizontalTime; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClimbingStateData) == 64);

}
