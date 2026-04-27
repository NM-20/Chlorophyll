#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871090
   RuntimeId:        2A29
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0958
   VfTable:          000000014236CC60
   Address (Base):   00000001430D8D50
*/
#pragma pack(push, 8)
class UIStatsQueryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIStatQueryEntry) Stats; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIStatsQueryInfo) == 24);

}
