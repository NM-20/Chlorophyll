#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840458
   RuntimeId:        0AD3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAB
   VfTable:          0000000142232840
   Address (Base):   00000001430EE980
*/
#pragma pack(push, 8)
class PA2LookAtTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PA2LookAtKeyframe) Keyframes; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PA2LookAtTrackData) == 48);

}
