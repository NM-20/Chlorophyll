#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849480
   RuntimeId:        0D88
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E54
   VfTable:          00000001422600E0
   Address (Base):   0000000143114610
*/
#pragma pack(push, 16)
class MissionObjectiveHudData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CameraRotation; /* 0x0010 */
  FB_FLOAT32 CameraFov; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 CameraPosition; /* 0x0020 */
  FB_FLOAT32 CameraDistance; /* 0x0030 */
  FB_FLOAT32 CameraLookDistance; /* 0x0034 */
  Vec2 VerticalBoundaries; /* 0x0038 */
  Vec2 HorizontalBoundaries; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MissionObjectiveHudData) == 80);

}
