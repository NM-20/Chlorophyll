#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852AA0
   RuntimeId:        15D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070F
   VfTable:          00000001422A1810
   Address (Base):   00000001430FB7D0
*/
#pragma pack(push, 8)
class MeshLodGroup : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Lod1Distance; /* 0x0018 */
  FB_FLOAT32 Lod2Distance; /* 0x001C */
  FB_FLOAT32 Lod3Distance; /* 0x0020 */
  FB_FLOAT32 Lod4Distance; /* 0x0024 */
  FB_FLOAT32 Lod5Distance; /* 0x0028 */
  FB_FLOAT32 Lod6Distance; /* 0x002C */
  FB_FLOAT32 ShadowDistance; /* 0x0030 */
  FB_FLOAT32 CullScreenArea; /* 0x0034 */
  FB_CSTRING RuntimeShortName; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MeshLodGroup) == 64);

}
