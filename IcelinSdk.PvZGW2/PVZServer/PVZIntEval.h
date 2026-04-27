#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EC38
   RuntimeId:        1D07
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1024
   VfTable:          000000014231E380
   Address (Base):   000000014310C390
*/
#pragma pack(push, 8)
class PVZIntEval : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class IntegerProvider) Condition; /* 0x0010 */
  CompareType CompareType; /* 0x0018 */
  FB_INT32 Value; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZIntEval) == 32);

}
