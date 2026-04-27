#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverWaveNameTranslation.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838AE8
   RuntimeId:        061C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07EF
   VfTable:          00000001421F9580
   Address (Base):   00000001430FF010
*/
#pragma pack(push, 8)
class VoiceOverManuscriptAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AudioLanguage) MasterLanguage; /* 0x0018 */
  FB_REFARRAY(class VoiceOverLanguageRoot) Languages; /* 0x0020 */
  VoiceOverWaveNameTranslation NameTranslation; /* 0x0028 */
  FB_UINT32 VariationUnderscoreCount; /* 0x002C */
  FB_CSTRING StringIdColumn; /* 0x0030 */
  FB_CSTRING FileNameColumn; /* 0x0038 */
  FB_CSTRING PathColumn; /* 0x0040 */
  FB_CSTRING WaveAssetStatusColumn; /* 0x0048 */
  FB_CSTRING SheetName; /* 0x0050 */
  FB_CSTRING VoiceColumn; /* 0x0058 */
  FB_CSTRING CharacterColumn; /* 0x0060 */
  FB_STDARRAY(struct VoiceOverManuscriptLanguageColumns) LanguageColumns; /* 0x0068 */
  FB_INT32 FirstContentRow; /* 0x0070 */
  char pad_0074[0x0004];
  FB_CSTRING StringIdPrefix; /* 0x0078 */
  FB_CSTRING OutputPath; /* 0x0080 */
  FB_BOOLEAN KeepPath; /* 0x0088 */
  FB_BOOLEAN StringIdUpperCase; /* 0x0089 */
  FB_BOOLEAN AllowDelete; /* 0x008A */
  FB_BOOLEAN EnableSubtitles; /* 0x008B */
  char pad_008C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverManuscriptAsset) == 144);

}
