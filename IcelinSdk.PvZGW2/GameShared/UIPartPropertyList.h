#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AF98
   RuntimeId:        0F0D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114A
   VfTable:          0000000142261958
   Address (Base):   0000000143113950
*/
#pragma pack(push, 8)
class UIPartPropertyList : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIPartProperties) HudPropertyList; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIPartPropertyList) == 24);

}
