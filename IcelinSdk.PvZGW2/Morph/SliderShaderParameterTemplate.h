#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameterTemplate.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Morph/VectorShaderNumValuesUsed.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FA68
   RuntimeId:        131B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0608
   VfTable:          00000001422771D0
   Address (Base):   00000001431106B0
*/
#pragma pack(push, 16)
class SliderShaderParameterTemplate : public ShaderParameterTemplate
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Default; /* 0x0020 */
  FB_FLOAT32 Min; /* 0x0030 */
  FB_FLOAT32 Max; /* 0x0034 */
  FB_FLOAT32 Step; /* 0x0038 */
  VectorShaderNumValuesUsed ValuesUsed; /* 0x003C */
  FB_CSTRING PresentationNameX; /* 0x0040 */
  FB_CSTRING PresentationNameY; /* 0x0048 */
  FB_CSTRING PresentationNameZ; /* 0x0050 */
  FB_CSTRING PresentationNameW; /* 0x0058 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(SliderShaderParameterTemplate) == 96);

}
