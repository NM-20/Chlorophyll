#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverPronunciationFallback.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838BA8
   RuntimeId:        0628
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1278
   VfTable:          00000001421F9540
   Address (Base):   0000000143116290
*/
#pragma pack(push, 8)
class VoiceOverPronunciation : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class AudioLanguage) PrimaryLanguage; /* 0x0018 */
  FB_HANDLE(class AudioLanguage) SecondaryLanguage; /* 0x0020 */
  VoiceOverPronunciationFallback SecondaryFallback; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverPronunciation) == 48);

}
