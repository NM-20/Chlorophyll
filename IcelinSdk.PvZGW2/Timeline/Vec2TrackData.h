#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428548E8
   RuntimeId:        177B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC7
   VfTable:          00000001422B4A50
   Address (Base):   00000001430EA720
*/
#pragma pack(push, 8)
class Vec2TrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) X; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) Y; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(Vec2TrackData) == 72);

}
