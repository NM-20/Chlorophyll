#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871E20
   RuntimeId:        2AE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDC
   VfTable:          000000014236BE88
   Address (Base):   00000001430E4060
*/
#pragma pack(push, 8)
class UIPlayerStatusWidgetRootData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) StatusItemBlueprint; /* 0x0048 */
  FB_BOOLEAN IgnoreDeadPlayers; /* 0x0050 */
  FB_BOOLEAN OnlyShowTeamPlayers; /* 0x0051 */
  FB_BOOLEAN ShowAIPlayers; /* 0x0052 */
  FB_BOOLEAN ShowPersistentAIPlayers; /* 0x0053 */
  FB_BOOLEAN AlwaysShowHumanPlayers; /* 0x0054 */
  char pad_0055[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIPlayerStatusWidgetRootData) == 88);

}
