#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATName.h>

namespace fb
{

/* TypeInfo (Array): 00000001428328A8
   RuntimeId:        007E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F52
   VfTable:          00000001421E2FD8
   Address (Base):   00000001430F36C0
*/
#pragma pack(push, 8)
class ATBranch : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ATBranch) Children; /* 0x0010 */
  FB_HANDLE(class ATBranch) ParentBranch; /* 0x0018 */
  ATName Name; /* 0x0020 */
  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ATBranch) == 56);

}
