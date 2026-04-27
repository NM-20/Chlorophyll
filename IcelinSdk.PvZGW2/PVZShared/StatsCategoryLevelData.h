#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869B88
   RuntimeId:        24FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB2
   VfTable:          00000001423558F0
   Address (Base):   0000000143107350
*/
#pragma pack(push, 8)
class StatsCategoryLevelData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING NodeNameNotMeta; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryLevelData) == 72);

}
