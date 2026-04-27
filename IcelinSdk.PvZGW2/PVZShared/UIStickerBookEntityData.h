#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871270
   RuntimeId:        2A3D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D7
   VfTable:          000000014236CCD0
   Address (Base):   00000001430E3040
*/
#pragma pack(push, 8)
class UIStickerBookEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 UnlockId; /* 0x0018 */
  FB_UINT32 SeenUnlockID; /* 0x001C */
  FB_BOOLEAN DataProvider; /* 0x0020 */
  FB_BOOLEAN FetchDataOnInit; /* 0x0021 */
  FB_BOOLEAN IncludeHidden; /* 0x0022 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookEntityData) == 40);

}
