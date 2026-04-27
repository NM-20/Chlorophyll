#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839E78
   RuntimeId:        0722
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D8
   VfTable:          00000001421FF4B8
   Address (Base):   0000000143115930
*/
#pragma pack(push, 16)
class UpdateVertexAnimData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VertexShaderFragmentAsset) ShaderFragment; /* 0x0030 */
  FB_FLOAT32 PerParticleRandomness; /* 0x0038 */
  char pad_003C[0x0004];
  Vec4 AnimationParameters; /* 0x0040 */
  FB_FLOAT32 FrequencyMultiplier; /* 0x0050 */
  char pad_0054[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UpdateVertexAnimData) == 96);

}
