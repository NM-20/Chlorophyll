#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428377B0
   RuntimeId:        04F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11EC
   VfTable:          00000001421FA150
   Address (Base):   00000001430F2F40
*/
#pragma pack(push, 8)
class MasterUnitSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class EqualizerSettings) Equalizer; /* 0x0018 */
  FB_HANDLE(class CompressorSettings) Compressor; /* 0x0020 */
  FB_FLOAT32 MasterVolume; /* 0x0028 */
  FB_FLOAT32 MasterLfeGain; /* 0x002C */
  FB_FLOAT32 MasterDialogGain; /* 0x0030 */
  FB_FLOAT32 ReverbVolume; /* 0x0034 */
  FB_FLOAT32 MainMixVolume; /* 0x0038 */
  FB_FLOAT32 DistortionClipLevel; /* 0x003C */
  FB_FLOAT32 ParallelDistortionGain; /* 0x0040 */
  FB_FLOAT32 PostEffectsGain; /* 0x0044 */
  FB_FLOAT32 FadeTime; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MasterUnitSettings) == 80);

}
