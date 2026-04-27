#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869E28
   RuntimeId:        2529
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA8
   VfTable:          00000001423557D0
   Address (Base):   00000001430F7FF0
*/
#pragma pack(push, 8)
class StatsCategoryData : public StatsCategoryBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StatsCategoryData) Categories; /* 0x0038 */
  FB_STDARRAY(FB_CSTRING) Members; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryData) == 72);

}
