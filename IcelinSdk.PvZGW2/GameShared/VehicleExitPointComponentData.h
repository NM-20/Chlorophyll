#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CC98
   RuntimeId:        10A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4B
   VfTable:          0000000142267370
   Address (Base):   00000001430FCD90
*/
#pragma pack(push, 16)
class VehicleExitPointComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Impulse; /* 0x0070 */
  FB_INT32 Ordinal; /* 0x0080 */
  FB_FLOAT32 TerrainHeight; /* 0x0084 */
  FB_FLOAT32 Velocity; /* 0x0088 */
  FB_BOOLEAN InheritCameraDirection; /* 0x008C */
  FB_BOOLEAN CheckForVehicleOverrun; /* 0x008D */
  char pad_008E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(VehicleExitPointComponentData) == 144);

}
