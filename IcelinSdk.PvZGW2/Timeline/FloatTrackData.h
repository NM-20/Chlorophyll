#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854D48
   RuntimeId:        17C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC4
   VfTable:          00000001422B5408
   Address (Base):   00000001430DAC70
*/
#pragma pack(push, 8)
class FloatTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CurveData) CurveData; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FloatTrackData) == 64);

}
