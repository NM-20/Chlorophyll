#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428549E8
   RuntimeId:        178B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD4
   VfTable:          00000001422B48F8
   Address (Base):   000000014310DB30
*/
#pragma pack(push, 8)
class TimelineTrackDataConditionsBase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TimelineTrackDataConditionsBase) == 16);

}
