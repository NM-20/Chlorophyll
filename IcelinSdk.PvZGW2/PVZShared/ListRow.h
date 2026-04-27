#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871CA0
   RuntimeId:        2ACB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0947
   VfTable:          000000014236BFF0
   Address (Base):   00000001430CFB40
*/
#pragma pack(push, 8)
class ListRow : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) RowTemplate; /* 0x0010 */
  FB_STDARRAY(enum GamePlatform) Platforms; /* 0x0018 */
  FB_BOOLEAN HideInRetail; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ListRow) == 40);

}
