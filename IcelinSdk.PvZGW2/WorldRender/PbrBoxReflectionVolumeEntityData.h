#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrGenericBoxReflectionVolumeEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855BC8
   RuntimeId:        1872
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B47
   VfTable:          00000001422BB830
   Address (Base):   00000001430E98E0
*/
#pragma pack(push, 16)
class PbrBoxReflectionVolumeEntityData : public PbrGenericBoxReflectionVolumeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InfluenceFadeNormal; /* 0x00A0 */
  FB_FLOAT32 SideFadePosX; /* 0x00B0 */
  FB_FLOAT32 SideFadeNegX; /* 0x00B4 */
  FB_FLOAT32 SideFadePosY; /* 0x00B8 */
  FB_FLOAT32 SideFadeNegY; /* 0x00BC */
  FB_FLOAT32 SideFadePosZ; /* 0x00C0 */
  FB_FLOAT32 SideFadeNegZ; /* 0x00C4 */
  char pad_00C8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(PbrBoxReflectionVolumeEntityData) == 208);

}
