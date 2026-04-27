#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854528
   RuntimeId:        173A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0975
   VfTable:          00000001422AF2B8
   Address (Base):   00000001430D5C50
*/
#pragma pack(push, 8)
class VisualVectorShapeData : public VectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ErrorTolerance; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader3d; /* 0x0030 */
  FB_UINT32 DrawOrderIndex; /* 0x0038 */
  FB_FLOAT32 TessellationTriangleSize; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VisualVectorShapeData) == 64);

}
