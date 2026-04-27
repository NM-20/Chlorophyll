#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/GameShared/ANTClipEndRule.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D1A0
   RuntimeId:        10E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          120A
   VfTable:          0000000142274600
   Address (Base):   0000000143112390
*/
#pragma pack(push, 8)
class ANTClipKeyframe : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  AntRef Controller; /* 0x0018 */
  FB_FLOAT32 ClipStartTrim; /* 0x002C */
  FB_FLOAT32 ClipEndTrim; /* 0x0030 */
  FB_FLOAT32 ClipCycleStartOffset; /* 0x0034 */
  FB_FLOAT32 ClipTimeScale; /* 0x0038 */
  ANTClipEndRule ClipEndRule; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ANTClipKeyframe) == 64);

}
