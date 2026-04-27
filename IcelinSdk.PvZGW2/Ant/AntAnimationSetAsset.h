#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428355F8
   RuntimeId:        02E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C5
   VfTable:          00000001421EFA50
   Address (Base):   00000001431199B0
*/
#pragma pack(push, 8)
class AntAnimationSetAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SkeletonAsset) SkeletonAsset; /* 0x0018 */
  FB_RESOURCEREF AssetBankResource; /* 0x0020 */
  FB_INT32 ActorAssetIndex; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(FB_INT32) ClipAssetIndices; /* 0x0030 */
  FB_STDARRAY(FB_INT32) LoopingClipAssetIndices; /* 0x0038 */
  FB_INT32 SceneOpMatrixAssetIndex; /* 0x0040 */
  FB_BOOLEAN UseTraj2Ref; /* 0x0044 */
  FB_BOOLEAN AllowAnimationCulling; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(AntAnimationSetAsset) == 72);

}
