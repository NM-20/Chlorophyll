#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicPlayableData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837E30
   RuntimeId:        0558
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0840
   VfTable:          00000001421F9AC8
   Address (Base):   00000001430FF910
*/
#pragma pack(push, 8)
class MusicOverlayData : public MusicPlayableData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct MusicOverlayVariation) Variations; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MusicOverlayData) == 64);

}
