#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870A60
   RuntimeId:        29DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094C
   VfTable:          000000014236D428
   Address (Base):   00000001430D9050
*/
#pragma pack(push, 8)
class UIGameGroupMembers : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIGameGroupMemberInfo) Members; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIGameGroupMembers) == 24);

}
