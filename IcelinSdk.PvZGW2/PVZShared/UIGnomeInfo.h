#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870FA0
   RuntimeId:        2A1F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088B
   VfTable:          000000014236CE38
   Address (Base):   00000001430D8DB0
*/
#pragma pack(push, 8)
class UIGnomeInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIGnomeItem) GnomeData; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIGnomeInfo) == 24);

}
