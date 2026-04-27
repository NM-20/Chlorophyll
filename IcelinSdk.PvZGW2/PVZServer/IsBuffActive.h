#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F298
   RuntimeId:        1D6D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          102C
   VfTable:          000000014231DBB8
   Address (Base):   000000014310B070
*/
#pragma pack(push, 8)
class IsBuffActive : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IsBuffActive) == 24);

}
