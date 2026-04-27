#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428547C8
   RuntimeId:        1769
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC2
   VfTable:          00000001422B4C40
   Address (Base):   00000001430DAE50
*/
#pragma pack(push, 8)
class IntTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct IntKeyframe) Keyframes; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(IntTrackData) == 64);

}
