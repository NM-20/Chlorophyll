#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853388
   RuntimeId:        1656
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1114
   VfTable:          00000001422A1358
   Address (Base):   000000014310E430
*/
#pragma pack(push, 8)
class SurfaceShaderInstanceData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) Shader; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SurfaceShaderInstanceData) == 24);

}
