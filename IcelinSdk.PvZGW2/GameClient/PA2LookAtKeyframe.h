#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840438
   RuntimeId:        0AD1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1209
   VfTable:          0000000142232890
   Address (Base):   0000000143114A90
*/
#pragma pack(push, 8)
class PA2LookAtKeyframe : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class PA2LookAtTarget) Target; /* 0x0018 */
  FB_INT32 Controller; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PA2LookAtKeyframe) == 40);

}
