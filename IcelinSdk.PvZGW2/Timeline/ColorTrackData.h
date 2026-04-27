#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854B88
   RuntimeId:        17A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC1
   VfTable:          00000001422B5760
   Address (Base):   00000001430EA420
*/
#pragma pack(push, 8)
class ColorTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ColorKeyframe) Keyframes; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ColorTrackData) == 64);

}
