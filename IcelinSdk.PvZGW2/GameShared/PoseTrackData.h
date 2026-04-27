#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ANTLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F490
   RuntimeId:        12C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDE
   VfTable:          00000001422766A0
   Address (Base):   0000000143110950
*/
#pragma pack(push, 8)
class PoseTrackData : public ANTLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PoseTrackKeyframe) Keyframes; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PoseTrackData) == 56);

}
