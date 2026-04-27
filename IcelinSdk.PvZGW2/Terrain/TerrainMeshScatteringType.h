#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 00000001428541C8
   RuntimeId:        1704
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087A
   VfTable:          00000001422AF378
   Address (Base):   00000001430FB5F0
*/
#pragma pack(push, 8)
class TerrainMeshScatteringType : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Identifier; /* 0x0010 */
  Vec2 MinScale; /* 0x0014 */
  Vec2 MaxScale; /* 0x001C */
  FB_FLOAT32 ScaleRandomness; /* 0x0024 */
  QualityScalableFloat Density; /* 0x0028 */
  FB_UINT32 FirstSpawnLevel; /* 0x0038 */
  FB_FLOAT32 WindScale; /* 0x003C */
  FB_FLOAT32 Stiffness; /* 0x0040 */
  FB_FLOAT32 Damping; /* 0x0044 */
  FB_FLOAT32 Mass; /* 0x0048 */
  FB_FLOAT32 WindWiggle; /* 0x004C */
  FB_FLOAT32 DissolveRangeRatio; /* 0x0050 */
  FB_BOOLEAN UseVertexColorWeights; /* 0x0054 */
  char pad_0055[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(TerrainMeshScatteringType) == 88);

}
