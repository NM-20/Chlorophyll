#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicStreamableData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837DD0
   RuntimeId:        0552
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0842
   VfTable:          00000001421F9AE8
   Address (Base):   00000001430FF9D0
*/
#pragma pack(push, 8)
class MusicSegmentData : public MusicStreamableData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0058 */
  FB_HANDLE(class MultitrackData) MultitrackLayers; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(MusicSegmentData) == 104);

}
