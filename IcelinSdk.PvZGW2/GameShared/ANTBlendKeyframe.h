#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>
#include <IcelinSdk.PvZGW2/GameShared/ANTBlendCurveType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D1C0
   RuntimeId:        10E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1204
   VfTable:          00000001422745A0
   Address (Base):   0000000143112330
*/
#pragma pack(push, 8)
class ANTBlendKeyframe : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  ANTBlendCurveType BlendCurveType; /* 0x0018 */
  FB_FLOAT32 BlendScale; /* 0x001C */
  FB_HANDLE(class CurveData) CurveData; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ANTBlendKeyframe) == 40);

}
