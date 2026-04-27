#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 00000001428370E0
   RuntimeId:        0488
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFE
   VfTable:          00000001421FA3C0
   Address (Base):   00000001430DCA10
*/
#pragma pack(push, 8)
class OutputNodeConfigData : public AudioGraphNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinDistance; /* 0x0018 */
  char pad_001C[0x0004];
  AudioCurve AttenuationCurve; /* 0x0020 */
  FB_FLOAT32 HFDampingDistance; /* 0x0030 */
  FB_FLOAT32 HFDampingObstruction; /* 0x0034 */
  FB_FLOAT32 HFDampingOcclusion; /* 0x0038 */
  FB_FLOAT32 Gain; /* 0x003C */
  FB_FLOAT32 ExpectedPeakAmplitude; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class MixGroup) MixGroup; /* 0x0048 */
  FB_BOOLEAN EnableHdr; /* 0x0050 */
  char pad_0051[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(OutputNodeConfigData) == 88);

}
