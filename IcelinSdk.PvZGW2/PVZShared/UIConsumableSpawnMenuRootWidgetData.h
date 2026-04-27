#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871C40
   RuntimeId:        2AC5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD6
   VfTable:          000000014236C038
   Address (Base):   00000001430E21A0
*/
#pragma pack(push, 8)
class UIConsumableSpawnMenuRootWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) ConsumableSpawnBlueprint; /* 0x0048 */
  FB_INT32 NumColumns; /* 0x0050 */
  FB_INT32 NumRows; /* 0x0054 */
  FB_INT32 JumpIndex; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UIConsumableSpawnMenuRootWidgetData) == 96);

}
