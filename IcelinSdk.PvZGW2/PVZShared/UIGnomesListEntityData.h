#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870FC0
   RuntimeId:        2A21
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C27
   VfTable:          000000014236CE60
   Address (Base):   00000001430E3100
*/
#pragma pack(push, 8)
class UIGnomesListEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SelectedGnomeIndex; /* 0x0018 */
  FB_BOOLEAN IsDataProvider; /* 0x001C */
  FB_BOOLEAN IsDebug; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIGnomesListEntityData) == 32);

}
