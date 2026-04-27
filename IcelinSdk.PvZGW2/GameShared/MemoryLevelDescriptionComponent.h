#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescriptionComponent.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableInt.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848EC8
   RuntimeId:        0D34
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF7
   VfTable:          00000001422605D0
   Address (Base):   00000001430FD3F0
*/
#pragma pack(push, 8)
class MemoryLevelDescriptionComponent : public LevelDescriptionComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PlatformScalableInt TextureStreamingPoolSize; /* 0x0010 */
  PlatformScalableInt MeshStreamingPoolSize; /* 0x0034 */
  PlatformScalableInt EmitterBaseAtlasWidth; /* 0x0058 */
  PlatformScalableInt EmitterBaseAtlasHeight; /* 0x007C */
  PlatformScalableInt EmitterBaseAtlasMipmapCount; /* 0x00A0 */
  PlatformScalableInt EmitterNormalAtlasWidth; /* 0x00C4 */
  PlatformScalableInt EmitterNormalAtlasHeight; /* 0x00E8 */
  PlatformScalableInt EmitterNormalAtlasMipmapCount; /* 0x010C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(MemoryLevelDescriptionComponent) == 304);

}
