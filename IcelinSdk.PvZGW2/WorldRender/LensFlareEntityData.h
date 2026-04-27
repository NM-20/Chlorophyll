#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428559C8
   RuntimeId:        1852
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7C
   VfTable:          00000001422BBC00
   Address (Base):   00000001430D5A70
*/
#pragma pack(push, 16)
class LensFlareEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Dimmer; /* 0x0060 */
  FB_FLOAT32 OccluderSize; /* 0x0064 */
  FB_FLOAT32 DepthBias; /* 0x0068 */
  char pad_006C[0x0004];
  FB_STDARRAY(struct LensFlareElement) Elements; /* 0x0070 */
  FB_BOOLEAN Visible; /* 0x0078 */
  FB_BOOLEAN DebugDrawOccluder; /* 0x0079 */
  FB_BOOLEAN HalfRes; /* 0x007A */
  char pad_007B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LensFlareEntityData) == 128);

}
