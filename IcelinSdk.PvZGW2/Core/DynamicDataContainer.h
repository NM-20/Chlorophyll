#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833588
   RuntimeId:        0113
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0E
   VfTable:          00000001421E51B8
   Address (Base):   0000000143101170
*/
#pragma pack(push, 8)
class DynamicDataContainer : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DataField) Fields; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DynamicDataContainer) == 24);

}
