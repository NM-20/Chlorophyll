#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854A08
   RuntimeId:        178D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08EE
   VfTable:          00000001422B4918
   Address (Base):   00000001430EA660
*/
#pragma pack(push, 8)
class TimelineExtraData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TimelineExtraData) == 16);

}
