#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Render/LocalIBLMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855B68
   RuntimeId:        186C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B44
   VfTable:          00000001422BB8D8
   Address (Base):   00000001430E9A00
*/
#pragma pack(push, 16)
class PbrReflectionVolumeEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalIBLMode Mode; /* 0x0060 */
  FB_FLOAT32 CaptureDistance; /* 0x0064 */
  FB_FLOAT32 CaptureFadeDistance; /* 0x0068 */
  FB_FLOAT32 InfluenceExpandDistance; /* 0x006C */
  FB_FLOAT32 InfluenceFadeDistance; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class TextureAsset) BakedTexture; /* 0x0078 */
  FB_BOOLEAN Enabled; /* 0x0080 */
  FB_BOOLEAN UpdateWhenMoving; /* 0x0081 */
  FB_BOOLEAN CaptureSky; /* 0x0082 */
  FB_BOOLEAN CaptureSkyMask; /* 0x0083 */
  FB_BOOLEAN UseSkyVisibilityAsAO; /* 0x0084 */
  FB_BOOLEAN UseSkyVisibilityAsMask; /* 0x0085 */
  FB_BOOLEAN DoNotUpdateBakedTexture; /* 0x0086 */
  char pad_0087[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PbrReflectionVolumeEntityData) == 144);

}
