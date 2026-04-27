#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837F10
   RuntimeId:        0566
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0644
   VfTable:          00000001421F9A68
   Address (Base):   00000001430F27C0
*/
#pragma pack(push, 8)
class MusicAsset : public MusicBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NameHash; /* 0x0028 */
  FB_UINT32 BeatsPerMinute; /* 0x002C */
  FB_UINT32 BeatsPerBar; /* 0x0030 */
  char pad_0034[0x0004];
  FB_REFARRAY(class MusicStreamableData) Playables; /* 0x0038 */
  FB_REFARRAY(class MusicOverlayData) Overlays; /* 0x0040 */
  FB_REFARRAY(class MusicSelector) Selectors; /* 0x0048 */
  FB_HANDLE(class MusicSelector) DefaultSelector; /* 0x0050 */
  FB_REFARRAY(class MusicTransition) FallbackTransitions; /* 0x0058 */
  FB_UINT8 VoicePriority; /* 0x0060 */
  char pad_0061[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(MusicAsset) == 104);

}
