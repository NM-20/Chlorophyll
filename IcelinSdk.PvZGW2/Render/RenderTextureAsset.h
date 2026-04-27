#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/TextureBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428526A0
   RuntimeId:        1592
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0716
   VfTable:          0000000142297848
   Address (Base):   000000014310EA30
*/
#pragma pack(push, 8)
class RenderTextureAsset : public TextureBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RenderTextureAsset) == 32);

}
