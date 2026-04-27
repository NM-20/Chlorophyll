#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428368B0
   RuntimeId:        0407
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0638
   VfTable:          00000001421F4A48
   Address (Base):   00000001430C0250
*/
#pragma pack(push, 8)
class SoundPatchConfigurationAsset : public SoundAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundPatchAsset) Sound; /* 0x0028 */
  FB_FLOAT32 Loudness; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class MixerAsset) Mixer; /* 0x0038 */
  FB_REFARRAY(class AudioGraphNodeConfigData) NodeConfigs; /* 0x0040 */
  FB_REFARRAY(class AudioGraphParameterConfigData) ParameterConfigs; /* 0x0048 */
  FB_HANDLE(class SoundPatchConfigurationDebugData) DebugData; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(SoundPatchConfigurationAsset) == 88);

}
