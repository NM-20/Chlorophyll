#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ListRow.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871CC0
   RuntimeId:        2ACD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094A
   VfTable:          000000014236BFD0
   Address (Base):   00000001430E20E0
*/
#pragma pack(push, 8)
class ListRow_LabelSingle : public ListRow
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ListRow_LabelSingle) == 48);

}
