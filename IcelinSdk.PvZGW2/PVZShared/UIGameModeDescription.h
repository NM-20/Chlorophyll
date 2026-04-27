#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871FA8
   RuntimeId:        2AF9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E66
   VfTable:          000000014236BD58
   Address (Base):   0000000143105070
*/
#pragma pack(push, 8)
class UIGameModeDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0028 */
  FB_CSTRING Name; /* 0x0030 */
  FB_CSTRING Abbreviation; /* 0x0038 */
  FB_CSTRING Desc; /* 0x0040 */
  FB_CSTRING Hint; /* 0x0048 */
  FB_INT32 BattlelogId; /* 0x0050 */
  char pad_0054[0x0004];
  FB_CSTRING TexturePath; /* 0x0058 */
  FB_STDARRAY(struct GameModeVariation) Variations; /* 0x0060 */
  FB_BOOLEAN ExcludeFromBrowser; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(UIGameModeDescription) == 112);

}
