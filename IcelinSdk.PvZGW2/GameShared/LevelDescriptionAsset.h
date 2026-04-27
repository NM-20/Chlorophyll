#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848F80
   RuntimeId:        0D3C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C6
   VfTable:          0000000142260560
   Address (Base):   0000000143114A30
*/
#pragma pack(push, 8)
class LevelDescriptionAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LevelName; /* 0x0018 */
  FB_STDARRAY(struct LevelDescriptionInclusionCategory) Categories; /* 0x0020 */
  LevelDescription Description; /* 0x0028 */
  FB_STDARRAY(struct LevelBundleLoad) Bundles; /* 0x0048 */
  FB_STDARRAY(struct LevelStartPoint) StartPoints; /* 0x0050 */
  FB_STDARRAY(FB_CSTRING) SuperBundles; /* 0x0058 */
  FB_GUID LevelGuid; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(LevelDescriptionAsset) == 112);

}
