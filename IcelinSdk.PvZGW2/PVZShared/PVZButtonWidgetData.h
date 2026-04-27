#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/ButtonEnum.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871E60
   RuntimeId:        2AE7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDB
   VfTable:          000000014236BE18
   Address (Base):   00000001430E1EA0
*/
#pragma pack(push, 8)
class PVZButtonWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ButtonEnum Button; /* 0x0048 */
  LocalPlayerId LocalPlayerId; /* 0x004C */
  FB_BOOLEAN IsModal; /* 0x0050 */
  char pad_0051[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZButtonWidgetData) == 88);

}
