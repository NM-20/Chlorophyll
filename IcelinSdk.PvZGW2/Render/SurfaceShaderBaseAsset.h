#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853368
   RuntimeId:        1654
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0654
   VfTable:          00000001422A13C0
   Address (Base):   00000001430EAD20
*/
#pragma pack(push, 8)
class SurfaceShaderBaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SurfaceShaderBaseAsset) == 24);

}
