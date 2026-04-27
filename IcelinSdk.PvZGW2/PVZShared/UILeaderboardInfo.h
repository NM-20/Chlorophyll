#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870C40
   RuntimeId:        29F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECE
   VfTable:          000000014236D248
   Address (Base):   00000001430D8F90
*/
#pragma pack(push, 8)
class UILeaderboardInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UILeaderboardColumn) ColumnNames; /* 0x0010 */
  FB_STDARRAY(struct UILeaderboardEntry) Entries; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILeaderboardInfo) == 32);

}
