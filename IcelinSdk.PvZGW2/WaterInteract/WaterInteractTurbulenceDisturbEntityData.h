#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876E18
   RuntimeId:        2E30
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B59
   VfTable:          0000000142395B60
   Address (Base):   00000001430DFFE0
*/
#pragma pack(push, 16)
class WaterInteractTurbulenceDisturbEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DisturbFreq; /* 0x0060 */
  FB_FLOAT32 AreaSizeX; /* 0x0064 */
  FB_FLOAT32 AreaSizeZ; /* 0x0068 */
  FB_FLOAT32 DisturbSize; /* 0x006C */
  FB_FLOAT32 DisturbVel; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(WaterInteractTurbulenceDisturbEntityData) == 128);

}
