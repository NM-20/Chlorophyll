#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>
#include <IcelinSdk.PvZGW2/Timeline/LayeredTransform_BlendType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854B08
   RuntimeId:        179F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE3
   VfTable:          00000001422B57B0
   Address (Base):   00000001430B7A00
*/
#pragma pack(push, 8)
class TransformLayerData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) Weight; /* 0x0028 */
  LayeredTransform_BlendType Blendtype; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TransformLayerData) == 56);

}
