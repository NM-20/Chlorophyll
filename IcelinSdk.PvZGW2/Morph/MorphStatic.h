#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FEE8
   RuntimeId:        1359
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0639
   VfTable:          0000000142276FA0
   Address (Base):   000000014310FFF0
*/
#pragma pack(push, 8)
class MorphStatic : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MeshVariationEntry) RuntimeVariations; /* 0x0018 */
  FB_RESOURCEREF MorphResource; /* 0x0020 */
  FB_HANDLE(class MeshAsset) RuntimeHeadBase; /* 0x0028 */
  FB_HANDLE(class MeshAsset) RuntimeHair; /* 0x0030 */
  FB_HANDLE(class MeshAsset) RuntimeBeard; /* 0x0038 */
  FB_INT32 SelectedPresetIndex; /* 0x0040 */
  char pad_0044[0x0004];
  FB_STDARRAY(struct VariationLink) VariationLinks; /* 0x0048 */
  FB_REFARRAY(class ShaderParameter) SliderParameters; /* 0x0050 */
  FB_REFARRAY(class ShaderParameter) ChannelParameters; /* 0x0058 */
  FB_REFARRAY(class ShaderParameter) ColorParameters; /* 0x0060 */
  FB_REFARRAY(class ShaderParameter) TextureParameters; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(MorphStatic) == 112);

}
