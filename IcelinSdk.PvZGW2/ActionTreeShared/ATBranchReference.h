#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428328C8
   RuntimeId:        0080
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FA
   VfTable:          00000001421E2FC8
   Address (Base):   000000014311D070
*/
#pragma pack(push, 8)
class ATBranchReference : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATBranch) Branch; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATBranchReference) == 24);

}
