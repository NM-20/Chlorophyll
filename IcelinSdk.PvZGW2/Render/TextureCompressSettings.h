#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Render/TextureCompressQualityMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428539E0
   RuntimeId:        16B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E05
   VfTable:          00000001422A1280
   Address (Base):   00000001430DB210
*/
#pragma pack(push, 8)
class TextureCompressSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TextureCompressQualityMode ViewMode; /* 0x0010 */
  FB_UINT32 TextureCompressJobPoolSize; /* 0x0014 */
  FB_FLOAT32 DebugDrawAlphaOverlayScale; /* 0x0018 */
  FB_BOOLEAN DebugDrawEnable; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TextureCompressSettings) == 32);

}
