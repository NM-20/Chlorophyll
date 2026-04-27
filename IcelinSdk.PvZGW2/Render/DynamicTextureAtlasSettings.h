#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852590
   RuntimeId:        1582
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E47
   VfTable:          000000014228DDD0
   Address (Base):   00000001430D07A0
*/
#pragma pack(push, 8)
class DynamicTextureAtlasSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 EmitterBaseWidth; /* 0x0010 */
  FB_UINT32 EmitterBaseHeight; /* 0x0014 */
  FB_UINT32 EmitterBaseMipmapCount; /* 0x0018 */
  FB_UINT32 EmitterBaseSkipmipsCount; /* 0x001C */
  FB_UINT32 EmitterNormalWidth; /* 0x0020 */
  FB_UINT32 EmitterNormalHeight; /* 0x0024 */
  FB_UINT32 EmitterNormalMipmapCount; /* 0x0028 */
  FB_UINT32 EmitterNormalSkipmipsCount; /* 0x002C */
  FB_FLOAT32 EmitterBasePixelBorder; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DynamicTextureAtlasSettings) == 56);

}
