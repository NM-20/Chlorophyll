#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871608
   RuntimeId:        2A67
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08FB
   VfTable:          000000014236C9E0
   Address (Base):   00000001430D8870
*/
#pragma pack(push, 8)
class RegionInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct RegionInfoEntry) RegionInfoEntries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RegionInfo) == 24);

}
