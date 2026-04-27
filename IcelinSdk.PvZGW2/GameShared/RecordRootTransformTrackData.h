#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackChildrenData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F4F0
   RuntimeId:        12C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCE
   VfTable:          0000000142276640
   Address (Base):   00000001430EBF20
*/
#pragma pack(push, 8)
class RecordRootTransformTrackData : public RecordTrackChildrenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LayeredTransformTrackData) LayeredTransformTrack; /* 0x0040 */
  FB_HANDLE(class KeyedTransformLayerData) KeyedTransformTrack; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(RecordRootTransformTrackData) == 80);

}
