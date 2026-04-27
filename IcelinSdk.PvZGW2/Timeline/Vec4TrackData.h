#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854928
   RuntimeId:        177F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC6
   VfTable:          00000001422B4A00
   Address (Base):   00000001430EA6C0
*/
#pragma pack(push, 8)
class Vec4TrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) X; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) Y; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) Z; /* 0x0048 */
  FB_HANDLE(class FloatTrackData) W; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(Vec4TrackData) == 88);

}
