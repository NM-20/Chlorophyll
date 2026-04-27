#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853410
   RuntimeId:        165C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0656
   VfTable:          00000001422A1348
   Address (Base):   00000001430FB710
*/
#pragma pack(push, 8)
class ShaderGraph : public SurfaceShaderBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ShaderGraph) == 24);

}
