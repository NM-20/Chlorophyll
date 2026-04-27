#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869DC8
   RuntimeId:        2523
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB3
   VfTable:          0000000142355880
   Address (Base):   0000000143106FF0
*/
#pragma pack(push, 8)
class StatsCategoryPrestigeLevelData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryPrestigeLevelData) == 64);

}
