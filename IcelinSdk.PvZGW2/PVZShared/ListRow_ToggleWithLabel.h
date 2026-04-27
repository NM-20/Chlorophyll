#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ListRow_Toggle.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871D00
   RuntimeId:        2AD1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0949
   VfTable:          000000014236C1A8
   Address (Base):   00000001430F54D0
*/
#pragma pack(push, 8)
class ListRow_ToggleWithLabel : public ListRow_Toggle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ToggleLabel; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ListRow_ToggleWithLabel) == 64);

}
