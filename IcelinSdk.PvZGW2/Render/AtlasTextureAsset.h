#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852680
   RuntimeId:        1590
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07ED
   VfTable:          0000000142297838
   Address (Base):   000000014310EA90
*/
#pragma pack(push, 8)
class AtlasTextureAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 AnimationColumnCount; /* 0x0018 */
  char pad_001C[0x0004];
  FB_RESOURCEREF Resource; /* 0x0020 */
  FB_INT32 AnimationFrameCount; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AtlasTextureAsset) == 48);

}
