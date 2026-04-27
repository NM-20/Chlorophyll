#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIBundlesAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856A60
   RuntimeId:        192B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081E
   VfTable:          00000001422CB538
   Address (Base):   000000014310D410
*/
#pragma pack(push, 8)
class FlowEdBundlesAsset : public UIBundlesAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct FontCollectionLookupEntry) FontCollectionLookups; /* 0x0020 */
  FB_CSTRING RootMovieClipPath; /* 0x0028 */
  FB_CSTRING GFxRootMovieClipPath; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FlowEdBundlesAsset) == 56);

}
