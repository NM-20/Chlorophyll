#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851840
   RuntimeId:        14A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C2
   VfTable:          000000014227F390
   Address (Base):   000000014310F030
*/
#pragma pack(push, 8)
class CharacterPhysicsData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CharacterPoseData) Poses; /* 0x0018 */
  FB_REFARRAY(class CharacterStateData) States; /* 0x0020 */
  CharacterStateType DefaultState; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class CharacterSprintData) Sprint; /* 0x0030 */
  MaterialDecl MaterialPair; /* 0x0038 */
  FB_INT32 PushableObjectWeight; /* 0x003C */
  FB_FLOAT32 Mass; /* 0x0040 */
  FB_FLOAT32 MaxAscendAngle; /* 0x0044 */
  FB_FLOAT32 PhysicalRadius; /* 0x0048 */
  FB_FLOAT32 EnterSwimStateDepth; /* 0x004C */
  FB_FLOAT32 ExitSwimStateDepth; /* 0x0050 */
  FB_FLOAT32 InputAcceleration; /* 0x0054 */
  FB_FLOAT32 LadderAcceptAngle; /* 0x0058 */
  FB_FLOAT32 LadderAcceptAnglePitch; /* 0x005C */
  FB_FLOAT32 JumpPenaltyTime; /* 0x0060 */
  FB_FLOAT32 JumpPenaltyFactor; /* 0x0064 */
  FB_FLOAT32 RadiusToPredictCollisionOnCharacters; /* 0x0068 */
  char pad_006C[0x0004];
  FB_HANDLE(class CharacterPhysicsBodyData) PhysicsBody; /* 0x0070 */
  FB_BOOLEAN AllowPoseChangeDuringTransition; /* 0x0078 */
  FB_BOOLEAN AutoPushAwayFromWallsInProne; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterPhysicsData) == 128);

}
