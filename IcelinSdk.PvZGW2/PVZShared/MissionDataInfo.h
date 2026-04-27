#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865D28
   RuntimeId:        2345
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1106
   VfTable:          0000000142350BE0
   Address (Base):   0000000143107E90
*/
#pragma pack(push, 8)
class MissionDataInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct MissionData) Missions; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MissionDataInfo) == 24);

}
