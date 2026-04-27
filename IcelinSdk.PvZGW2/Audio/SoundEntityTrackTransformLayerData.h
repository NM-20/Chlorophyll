#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LayeredTransformTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837A10
   RuntimeId:        0516
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBD
   VfTable:          00000001421F9FB0
   Address (Base):   00000001430F2D60
*/
#pragma pack(push, 8)
class SoundEntityTrackTransformLayerData : public LayeredTransformTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 LayerHash; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackTransformLayerData) == 80);

}
