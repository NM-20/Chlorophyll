#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854B48
   RuntimeId:        17A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBE
   VfTable:          00000001422B5818
   Address (Base):   00000001430DACD0
*/
#pragma pack(push, 8)
class BoolTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct BoolKeyframe) Keyframes; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BoolTrackData) == 64);

}
