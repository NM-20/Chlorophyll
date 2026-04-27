#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EAF8
   RuntimeId:        1243
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0641
   VfTable:          0000000142272CC8
   Address (Base):   0000000143110FB0
*/
#pragma pack(push, 8)
class VehicleVisualCustomizationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ShaderTextureUnlockPartCollection) TextureUnlockPartCollections; /* 0x0018 */
  FB_REFARRAY(class TextUnlockPartData) TextUnlockParts; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VehicleVisualCustomizationAsset) == 40);

}
