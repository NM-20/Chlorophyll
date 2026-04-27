#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836650
   RuntimeId:        03E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0637
   VfTable:          00000001421F4B48
   Address (Base):   00000001430C02B0
*/
#pragma pack(push, 8)
class SoundPatchAsset : public SoundGraphAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AudioGraphNodeData) OutputNodes; /* 0x0038 */
  FB_FLOAT32 Loudness; /* 0x0040 */
  FB_FLOAT32 AILoudness; /* 0x0044 */
  FB_FLOAT32 Radius; /* 0x0048 */
  FB_FLOAT32 DopplerFactor; /* 0x004C */
  FB_FLOAT32 MasterPitch; /* 0x0050 */
  char pad_0054[0x0004];
  FB_HANDLE(class AudioGraphEvent) DefaultStartEvent; /* 0x0058 */
  FB_HANDLE(class AudioGraphEvent) DefaultStopEvent; /* 0x0060 */
  FB_HANDLE(class AudioGraphEvent) DefaultEnterScopeEvent; /* 0x0068 */
  FB_HANDLE(class AudioGraphEvent) DefaultForceInitEvent; /* 0x0070 */
  FB_FLOAT32 MaxAllowableDucking; /* 0x0078 */
  FB_BOOLEAN IsLooping; /* 0x007C */
  FB_BOOLEAN IsPersistent; /* 0x007D */
  FB_BOOLEAN AddToHdr; /* 0x007E */
  FB_BOOLEAN IncludeMeasuredGain; /* 0x007F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SoundPatchAsset) == 128);

}
