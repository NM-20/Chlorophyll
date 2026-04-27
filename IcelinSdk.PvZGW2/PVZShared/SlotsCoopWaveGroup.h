#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/CoopWaveGroup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873608
   RuntimeId:        2BD0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA0
   VfTable:          0000000142379218
   Address (Base):   00000001430F5170
*/
#pragma pack(push, 8)
class SlotsCoopWaveGroup : public CoopWaveGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SlotIcon1; /* 0x0050 */
  FB_CSTRING SlotIcon2; /* 0x0058 */
  FB_CSTRING SlotIcon3; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(SlotsCoopWaveGroup) == 104);

}
