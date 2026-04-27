#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Pathfinding/EntityMoverType.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850958
   RuntimeId:        13D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1D
   VfTable:          000000014227C618
   Address (Base):   00000001430EB680
*/
#pragma pack(push, 16)
class MoverComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  EntityMoverType type; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class MoverTune) moverTune; /* 0x0078 */
  FB_FLOAT32 goalPlanFailureTreshold; /* 0x0080 */
  FB_FLOAT32 goalHeightFailureTreshold; /* 0x0084 */
  FB_HANDLE(class RadiusData) radiusData; /* 0x0088 */
  FB_HANDLE(class RepulsorAutoObstacle) RepulsorAutoObstacleData; /* 0x0090 */
  FB_FLOAT32 MoveSpeedModifier; /* 0x0098 */
  AntRef DesiredMovementAngleGameState; /* 0x009C */
  AntRef DesiredRelativeMovementAngleGameState; /* 0x00B0 */
  AntRef DesiredMovementSpeedGameState; /* 0x00C4 */
  AntRef DesiredFacingAngleGameState; /* 0x00D8 */
  AntRef DesiredRelativeFacingAngleGameState; /* 0x00EC */
  AntRef DistanceToGoalGameState; /* 0x0100 */
  FB_BOOLEAN EnablePuppetMode; /* 0x0114 */
  FB_BOOLEAN LockToNavGraph; /* 0x0115 */
  char pad_0116[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(MoverComponentData) == 288);

}
