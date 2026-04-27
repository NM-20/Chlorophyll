#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428526E0
   RuntimeId:        1596
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E5
   VfTable:          0000000142297808
   Address (Base):   000000014310E9D0
*/
#pragma pack(push, 8)
class TextureAtlasAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TextureAtlasAsset) == 24);

}
