#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836B10
   RuntimeId:        042D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E92
   VfTable:          00000001421F4990
   Address (Base):   0000000143118510
*/
#pragma pack(push, 8)
class SoundWaveVariation : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct SoundWaveSubtitle) Subtitles; /* 0x0010 */
  FB_STDARRAY(struct SoundWaveVariationSegment) Segments; /* 0x0018 */
  FB_UINT32 PersistentDataSize; /* 0x0020 */
  FB_UINT8 Weight; /* 0x0024 */
  FB_UINT8 ChunkIndex; /* 0x0025 */
  FB_UINT8 FirstLoopSegmentIndex; /* 0x0026 */
  FB_UINT8 LastLoopSegmentIndex; /* 0x0027 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundWaveVariation) == 40);

}
