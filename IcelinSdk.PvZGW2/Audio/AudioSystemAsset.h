#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836730
   RuntimeId:        03EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A1
   VfTable:          00000001421F4AE8
   Address (Base):   00000001431189F0
*/
#pragma pack(push, 8)
class AudioSystemAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundMasterPatchAsset) MasterPatch; /* 0x0018 */
  FB_REFARRAY(class StreamPoolPreset) StreamPoolPresets; /* 0x0020 */
  FB_HANDLE(class StreamPoolPreset) DefaultStreamPoolPreset; /* 0x0028 */
  FB_REFARRAY(class SoundDataPolicy) DataPolicies; /* 0x0030 */
  FB_UINT32 SampleRate; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class SoundTestAsset) Tests; /* 0x0040 */
  FB_HANDLE(class MixerSystemAsset) MixerSystem; /* 0x0048 */
  FB_REFARRAY(class AudioLanguage) Languages; /* 0x0050 */
  FB_REFARRAY(class AudioLanguageSetting) LanguageSettings; /* 0x0058 */
  FB_HANDLE(class AudioLanguage) DefaultLanguage; /* 0x0060 */
  FB_REFARRAY(class SoundScopeData) Scopes; /* 0x0068 */
  FB_REFARRAY(class SoundScopeStrategyData) ScopeStrategies; /* 0x0070 */
  FB_REFARRAY(class SoundScopeSetupData) ScopeSetups; /* 0x0078 */
  FB_REFARRAY(class HdrSetting) HdrSettings; /* 0x0080 */
  FB_HANDLE(class HdrSetting) DefaultHdrSetting; /* 0x0088 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(AudioSystemAsset) == 144);

}
