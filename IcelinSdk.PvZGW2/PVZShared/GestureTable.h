#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864338
   RuntimeId:        21CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094E
   VfTable:          00000001423528C8
   Address (Base):   0000000143108250
*/
#pragma pack(push, 8)
class GestureTable : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct GestureSlotData) GestureSlots; /* 0x0010 */
  FB_REFARRAY(class GestureUnlockAsset) SelectableUnlocks; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GestureTable) == 32);

}
