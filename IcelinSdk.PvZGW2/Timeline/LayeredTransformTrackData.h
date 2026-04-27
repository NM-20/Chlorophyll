#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428547E8
   RuntimeId:        176B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBB
   VfTable:          00000001422B4C90
   Address (Base):   00000001430D5B90
*/
#pragma pack(push, 8)
class LayeredTransformTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TransformLayerData) LayerTracks; /* 0x0038 */
  FB_INT32 TimelineOriginPinId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(LayeredTransformTrackData) == 72);

}
