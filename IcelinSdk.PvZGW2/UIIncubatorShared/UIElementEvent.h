#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementTrigger.h>

namespace fb
{

/* TypeInfo (Array): 00000001428768F8
   RuntimeId:        2DEF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E07
   VfTable:          0000000142392F40
   Address (Base):   00000001430F49F0
*/
#pragma pack(push, 8)
class UIElementEvent : public UIElementTrigger
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Event; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIElementEvent) == 24);

}
