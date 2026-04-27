#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869AC8
   RuntimeId:        24F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA9
   VfTable:          00000001423559E8
   Address (Base):   00000001430BC7A0
*/
#pragma pack(push, 8)
class StatsCategoryGuidData : public StatsCategoryBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_GUID) ObjectInstanceGuids; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryGuidData) == 64);

}
