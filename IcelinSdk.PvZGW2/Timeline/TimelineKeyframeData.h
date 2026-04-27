#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428549C8
   RuntimeId:        1789
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1201
   VfTable:          00000001422B48E8
   Address (Base):   00000001430BFAD0
*/
#pragma pack(push, 8)
class TimelineKeyframeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TimelineKeyframeData) == 16);

}
