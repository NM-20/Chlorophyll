#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850CE0
   RuntimeId:        1402
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060D
   VfTable:          000000014227F930
   Address (Base):   000000014310F870
*/
#pragma pack(push, 8)
class ClothDebugRendererSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RenderDistance; /* 0x0010 */
  FB_BOOLEAN RenderWorld; /* 0x0014 */
  FB_BOOLEAN RenderWorldStats; /* 0x0015 */
  FB_BOOLEAN RenderClothInstanceStats; /* 0x0016 */
  FB_BOOLEAN RenderClothInstanceSimMesh; /* 0x0017 */
  FB_BOOLEAN RenderClothInstanceRenderMesh; /* 0x0018 */
  FB_BOOLEAN RenderClothInstanceCollidables; /* 0x0019 */
  FB_BOOLEAN RenderClothInstanceSkinning; /* 0x001A */
  FB_BOOLEAN RenderClothInstanceParticles; /* 0x001B */
  FB_BOOLEAN RenderClothInstanceParticlesAabb; /* 0x001C */
  FB_BOOLEAN RenderClothInstanceOperators; /* 0x001D */
  FB_BOOLEAN RenderClothWorldPhantoms; /* 0x001E */
  FB_BOOLEAN RenderWorldCollidables; /* 0x001F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClothDebugRendererSettings) == 32);

}
