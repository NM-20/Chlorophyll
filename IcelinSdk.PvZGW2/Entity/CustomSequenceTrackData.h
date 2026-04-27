#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BE30
   RuntimeId:        095A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA2
   VfTable:          0000000142212388
   Address (Base):   0000000143114F70
*/
#pragma pack(push, 8)
class CustomSequenceTrackData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TrackName; /* 0x0018 */
  FB_REFARRAY(class CustomSequenceTrackLinkMapping) InputLinkMap; /* 0x0020 */
  FB_REFARRAY(class CustomSequenceTrackLinkMapping) OutputLinkMap; /* 0x0028 */
  FB_REFARRAY(class CustomSequenceTrackEventMapping) EventMap; /* 0x0030 */
  FB_REFARRAY(class CustomSequenceTrackPropertyMapping) SourcePropertyMap; /* 0x0038 */
  FB_REFARRAY(class CustomSequenceTrackPropertyMapping) TargetPropertyMap; /* 0x0040 */
  FB_REFARRAY(class CustomSequenceTrackPropertyMapping) SourceAndTargetPropertyMap; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CustomSequenceTrackData) == 80);

}
