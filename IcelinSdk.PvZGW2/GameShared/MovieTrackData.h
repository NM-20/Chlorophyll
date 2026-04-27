#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/GuideTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849C88
   RuntimeId:        0E02
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD3
   VfTable:          000000014225F748
   Address (Base):   00000001430EDE40
*/
#pragma pack(push, 8)
class MovieTrackData : public GuideTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MovieTrackKeyframe) Keyframes; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MovieTrackData) == 56);

}
