#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854908
   RuntimeId:        177D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB9
   VfTable:          00000001422B49B0
   Address (Base):   00000001430DADF0
*/
#pragma pack(push, 8)
class Vec3TrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) X; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) Y; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) Z; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(Vec3TrackData) == 80);

}
