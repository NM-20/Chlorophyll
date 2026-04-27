#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PropertyTrackData.h>
#include <IcelinSdk.PvZGW2/Entity/InterpolationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BEB0
   RuntimeId:        0962
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB8
   VfTable:          0000000142212340
   Address (Base):   00000001430C0190
*/
#pragma pack(push, 8)
class SimplePropertyTrackData : public PropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InterpolationType InterpolationType; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SimplePropertyTrackData) == 40);

}
