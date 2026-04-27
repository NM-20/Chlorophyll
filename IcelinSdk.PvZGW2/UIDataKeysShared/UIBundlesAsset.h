#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875B10
   RuntimeId:        2D48
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081D
   VfTable:          000000014238D868
   Address (Base):   00000001430F4CF0
*/
#pragma pack(push, 8)
class UIBundlesAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIBundleAssetState) UIBundleAssetStateList; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIBundlesAsset) == 32);

}
