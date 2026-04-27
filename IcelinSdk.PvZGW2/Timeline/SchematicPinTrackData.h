#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428548C8
   RuntimeId:        1779
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB7
   VfTable:          00000001422B4B90
   Address (Base):   00000001430DAFD0
*/
#pragma pack(push, 8)
class SchematicPinTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SourcePinId; /* 0x0028 */
  FB_INT32 TargetPinId; /* 0x002C */
  FB_INT32 TargetPinNameHash; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SchematicPinTrackData) == 56);

}
