#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerMessageWidgetData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871C20
   RuntimeId:        2AC3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD4
   VfTable:          000000014236C340
   Address (Base):   00000001430E2200
*/
#pragma pack(push, 16)
class UIKillLogTickerMessageWidgetData : public UITickerMessageWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0048[0x0008];
  Vec3 FriendlyColor; /* 0x0050 */
  Vec3 EnemyColor; /* 0x0060 */
  Vec3 LocalPlayerColor; /* 0x0070 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIKillLogTickerMessageWidgetData) == 128);

}
