#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868970
   RuntimeId:        240B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110C
   VfTable:          000000014234E9A0
   Address (Base):   0000000143107C50
*/
#pragma pack(push, 8)
class PVZServerConfiguration : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZServerConfigurationSchedule) Schedules; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZServerConfiguration) == 24);

}
