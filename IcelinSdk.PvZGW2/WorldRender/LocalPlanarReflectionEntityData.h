#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855C08
   RuntimeId:        1876
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B88
   VfTable:          00000001422BB8A0
   Address (Base):   00000001430E9820
*/
#pragma pack(push, 16)
class LocalPlanarReflectionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FarPlane; /* 0x0060 */
  FB_FLOAT32 DistanceTolerance; /* 0x0064 */
  FB_FLOAT32 DistanceFalloff; /* 0x0068 */
  FB_FLOAT32 NormalTolerance; /* 0x006C */
  FB_FLOAT32 NormalFalloff; /* 0x0070 */
  FB_BOOLEAN Enable; /* 0x0074 */
  FB_BOOLEAN TerrainReflectionsEnable; /* 0x0075 */
  FB_BOOLEAN SkyReflectionEnable; /* 0x0076 */
  char pad_0077[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LocalPlanarReflectionEntityData) == 128);

}
