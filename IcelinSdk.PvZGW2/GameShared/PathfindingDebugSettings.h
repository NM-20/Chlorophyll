#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/PathfindingReplayMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849D88
   RuntimeId:        0E12
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1148
   VfTable:          000000014225F698
   Address (Base):   00000001430DC230
*/
#pragma pack(push, 8)
class PathfindingDebugSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DrawNavMesh; /* 0x0010 */
  FB_FLOAT32 DrawDistance; /* 0x0014 */
  FB_INT32 TextStartX; /* 0x0018 */
  FB_INT32 TextStartY; /* 0x001C */
  FB_INT32 TextOffsetY; /* 0x0020 */
  PathfindingReplayMode ReplayMode; /* 0x0024 */
  FB_BOOLEAN DrawPolygonOutline; /* 0x0028 */
  FB_BOOLEAN DrawFilledPolygons; /* 0x0029 */
  FB_BOOLEAN DrawConnections; /* 0x002A */
  FB_BOOLEAN DrawObstacles; /* 0x002B */
  FB_BOOLEAN DrawAreaNormals; /* 0x002C */
  FB_BOOLEAN DrawObstacleFlags; /* 0x002D */
  FB_BOOLEAN DrawAreaPenaltyMults; /* 0x002E */
  FB_BOOLEAN DrawAreaUsageFlags; /* 0x002F */
  FB_BOOLEAN ColorizeAreaUsageFlags; /* 0x0030 */
  FB_BOOLEAN DrawLinkUsageDistances; /* 0x0031 */
  FB_BOOLEAN DrawLinkUsageFlags; /* 0x0032 */
  FB_BOOLEAN DrawOriginalLinkLocations; /* 0x0033 */
  FB_BOOLEAN DrawRecentNavProbes; /* 0x0034 */
  FB_BOOLEAN DrawRecentCreatePolyLinePaths; /* 0x0035 */
  FB_BOOLEAN DrawMoverCylinders; /* 0x0036 */
  FB_BOOLEAN DrawMoverGoals; /* 0x0037 */
  FB_BOOLEAN DrawMoverGoalsReached; /* 0x0038 */
  FB_BOOLEAN DrawMoverState; /* 0x0039 */
  FB_BOOLEAN DrawMoverAttractions; /* 0x003A */
  FB_BOOLEAN DrawRepulsors; /* 0x003B */
  FB_BOOLEAN DrawClientMotion; /* 0x003C */
  FB_BOOLEAN DrawCurPathSection; /* 0x003D */
  FB_BOOLEAN DrawFollowerGoals; /* 0x003E */
  FB_BOOLEAN DepthTest; /* 0x003F */
  FB_BOOLEAN DrawStats; /* 0x0040 */
  FB_BOOLEAN DrawMemory; /* 0x0041 */
  FB_BOOLEAN DrawTimings; /* 0x0042 */
  FB_BOOLEAN OriginalPaths; /* 0x0043 */
  FB_BOOLEAN RandomPositions; /* 0x0044 */
  FB_BOOLEAN PotentialObstacles; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PathfindingDebugSettings) == 72);

}
