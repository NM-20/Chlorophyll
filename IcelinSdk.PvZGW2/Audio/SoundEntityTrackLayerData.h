#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837A30
   RuntimeId:        0518
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD8
   VfTable:          00000001421F9F58
   Address (Base):   00000001430DCB90
*/
#pragma pack(push, 8)
class SoundEntityTrackLayerData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 LayerHash; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackLayerData) == 48);

}
