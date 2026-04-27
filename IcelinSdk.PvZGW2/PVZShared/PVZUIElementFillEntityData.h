#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementFillEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871970
   RuntimeId:        2A99
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB2
   VfTable:          000000014236C420
   Address (Base):   00000001430D92F0
*/
#pragma pack(push, 16)
class PVZUIElementFillEntityData : public UIElementFillEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 DynamicSize; /* 0x0100 */
  char pad_0108[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(PVZUIElementFillEntityData) == 272);

}
