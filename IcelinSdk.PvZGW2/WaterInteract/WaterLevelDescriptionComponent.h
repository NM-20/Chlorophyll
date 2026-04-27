#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescriptionComponent.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableInt.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876E98
   RuntimeId:        2E38
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF5
   VfTable:          0000000142395A98
   Address (Base):   00000001430F4990
*/
#pragma pack(push, 8)
class WaterLevelDescriptionComponent : public LevelDescriptionComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PlatformScalableInt MaxSimulationCount; /* 0x0010 */
  PlatformScalableInt MaxVisibleWaterSurfaceCount; /* 0x0034 */
  PlatformScalableInt RenderGridWidth; /* 0x0058 */
  PlatformScalableInt RenderGridHeight; /* 0x007C */
  PlatformScalableInt MinAmbientSimulationResolution; /* 0x00A0 */
  PlatformScalableInt MaxAmbientSimulationResolution; /* 0x00C4 */
  FB_BOOLEAN Enabled; /* 0x00E8 */
  char pad_00E9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(WaterLevelDescriptionComponent) == 240);

}
