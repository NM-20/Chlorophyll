#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundDataAsset.h>
#include <IcelinSdk.PvZGW2/Audio/SoundWaveVariationSelection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836B90
   RuntimeId:        0435
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068D
   VfTable:          00000001421F4968
   Address (Base):   00000001430D10A0
*/
#pragma pack(push, 8)
class SoundWaveAsset : public SoundDataAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct SoundWaveRuntimeVariation) RuntimeVariations; /* 0x0030 */
  FB_STDARRAY(struct SoundWaveLocalizationInfo) Localization; /* 0x0038 */
  FB_STDARRAY(FB_CSTRING) SubtitleStringIds; /* 0x0040 */
  FB_STDARRAY(struct SoundWaveSubtitle) Subtitles; /* 0x0048 */
  SoundWaveVariationSelection Selection; /* 0x0050 */
  char pad_0054[0x0004];
  FB_HANDLE(class StreamPoolAsset) StreamPool; /* 0x0058 */
  FB_STDARRAY(struct SoundWaveVariationSegment) Segments; /* 0x0060 */
  FB_BOOLEAN Seekable; /* 0x0068 */
  FB_UINT8 VariationHistoryCount; /* 0x0069 */
  FB_UINT8 PersistentVariationCount; /* 0x006A */
  FB_BOOLEAN PreferAvailableVariations; /* 0x006B */
  FB_BOOLEAN RandomPersistentVariations; /* 0x006C */
  FB_UINT8 StreamingMode; /* 0x006D */
  FB_UINT8 ChannelCount; /* 0x006E */
  FB_UINT8 VoicePriority; /* 0x006F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(SoundWaveAsset) == 112);

}
