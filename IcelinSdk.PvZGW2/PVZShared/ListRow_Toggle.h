#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ListRow.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871CE0
   RuntimeId:        2ACF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0948
   VfTable:          000000014236C010
   Address (Base):   00000001430E2080
*/
#pragma pack(push, 8)
class ListRow_Toggle : public ListRow
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Labels; /* 0x0028 */
  FB_CSTRING CurrentToggleValue; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ListRow_Toggle) == 56);

}
