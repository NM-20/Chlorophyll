#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrReflectionVolumeEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855BA8
   RuntimeId:        1870
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B48
   VfTable:          00000001422BB948
   Address (Base):   00000001430E9940
*/
#pragma pack(push, 16)
class PbrSphereReflectionVolumeEntityData : public PbrReflectionVolumeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InfluenceFadeNormal; /* 0x0090 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PbrSphereReflectionVolumeEntityData) == 160);

}
