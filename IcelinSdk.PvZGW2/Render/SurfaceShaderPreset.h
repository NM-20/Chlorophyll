#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderBaseAsset.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 00000001428533F0
   RuntimeId:        165A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0655
   VfTable:          00000001422A1380
   Address (Base):   00000001430BEE30
*/
#pragma pack(push, 8)
class SurfaceShaderPreset : public SurfaceShaderBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SurfaceShaderInstanceDataStruct ShaderPreset; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SurfaceShaderPreset) == 64);

}
