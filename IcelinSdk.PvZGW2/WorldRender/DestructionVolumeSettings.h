#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855598
   RuntimeId:        1822
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B7
   VfTable:          00000001422BBFF0
   Address (Base):   00000001430DAB50
*/
#pragma pack(push, 8)
class DestructionVolumeSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PixelsPerMeter; /* 0x0010 */
  FB_FLOAT32 DistanceFieldMultiplier; /* 0x0014 */
  FB_INT32 TexturePoolSize; /* 0x0018 */
  FB_INT32 TexturePoolHeadroomSize; /* 0x001C */
  FB_INT32 TexturePoolDefragTransferLimit; /* 0x0020 */
  FB_BOOLEAN JobsEnable; /* 0x0024 */
  FB_BOOLEAN ForceUpdateEnable; /* 0x0025 */
  FB_BOOLEAN DrawDebugVolumes; /* 0x0026 */
  FB_BOOLEAN DrawDebugImpacts; /* 0x0027 */
  FB_BOOLEAN DrawDebugTexturePool; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DestructionVolumeSettings) == 48);

}
