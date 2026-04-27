#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ANTLayerData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D240
   RuntimeId:        10ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDD
   VfTable:          0000000142274548
   Address (Base):   0000000143112210
*/
#pragma pack(push, 8)
class DefaultANTLayerData : public ANTLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef BlendMaskList; /* 0x0030 */
  char pad_0044[0x0004];
  FB_HANDLE(class ANTClipKeyframeTrackData) ClipTrack; /* 0x0048 */
  FB_HANDLE(class ANTBlendKeyframeTrackData) BlendTrack; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(DefaultANTLayerData) == 88);

}
